//test
#include <opencv2/opencv.hpp>
#include <iostream>
#include <vector>
#include <cmath>

using namespace cv;
using namespace std;

int main(int argc, char** argv) {
    if (argc < 3) {
        cout << "Usage: ./camo input.png output_width\n";
        return 1;
    }

    Mat original = imread(argv[1]);

    if (original.empty()) {
        cerr << "Cannot load image!\n";
        return 1;
    }

    int outputWidth = stoi(argv[2]);

    // Pixel grid
    int cols = 64;
    int rows = round(cols * (double)original.rows / original.cols);

    // Reduce image to pixel grid
    Mat small;
    resize(original, small, Size(cols, rows), 0, 0, INTER_AREA);

    // Prepare data for color clustering
    Mat samples = small.reshape(1, cols * rows);
    Mat samplesFloat;
    samples.convertTo(samplesFloat, CV_32F);

    Mat labels, centers;

    // Extract 5 dominant colors
    setRNGSeed(42);

    kmeans(
        samplesFloat,
        5,
        labels,
        TermCriteria(
            TermCriteria::EPS + TermCriteria::COUNT,
            30,
            0.1
        ),
        5,
        KMEANS_PP_CENTERS,
        centers
    );

    // Reconstruct pixel pattern
    Mat pixelArt(rows, cols, CV_8UC3);

    for (int i = 0; i < rows * cols; i++) {
        int cluster = labels.at<int>(i);

        Vec3b color(
            saturate_cast<uchar>(centers.at<float>(cluster, 0)),
            saturate_cast<uchar>(centers.at<float>(cluster, 1)),
            saturate_cast<uchar>(centers.at<float>(cluster, 2))
        );

        pixelArt.at<Vec3b>(i / cols, i % cols) = color;
    }

    // Scale without smoothing
    int outputHeight = round(
        outputWidth * (double)rows / cols
    );

    Mat output;

    resize(
        pixelArt,
        output,
        Size(outputWidth, outputHeight),
        0, 0,
        INTER_NEAREST
    );

    imwrite("camouflage.png", output);

    cout << "Generated: camouflage.png\n";
    cout << "Size: " << output.cols << " x "
         << output.rows << endl;

    return 0;
}
