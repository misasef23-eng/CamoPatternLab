# 🎖️ K25 Digital Camo Generator Simulation (C++)

Một chương trình mô phỏng bằng C++ thuật toán sinh họa tiết ngụy trang kỹ thuật số (Digital Pixel Camouflage) cho quân phục dã chiến **K25** của Bộ Quốc phòng Việt Nam dựa trên khóa đầu vào (Seed/Key).

![License](https://img.shields.io/badge/license-MIT-blue.svg)
![Language](https://img.shields.io/badge/language-C%2B%2B17-green.svg)
![Build](https://img.shields.io/badge/build-passing-brightgreen.svg)

---

## 📌 Giới thiệu (Overview)

Quân phục dã chiến thế hệ mới K25 sử dụng họa tiết ngụy trang kỹ thuật số (Digital Camo) giúp tối ưu khả năng ẩn nấp trong nhiều địa hình khác nhau (rừng rậm, đô thị, sa mạc...). Dự án này mô phỏng quá trình tạo ra các mẫu họa tiết pixel độc bản từ một **khóa ngẫu nhiên (Key/Seed)**, cho phép tạo ra mẫu phối màu và phân bố ô vuông pixel theo quy chuẩn.

Dự án phục vụ mục đích **nghiên cứu, học thuật và học tập lập trình C++**.

---

## ✨ Tính năng chính (Features)

- 🔑 **Key-Based Generation:** Sinh họa tiết ngụy trang độc bản dựa trên chuỗi Key/Seed nhập vào.
- 🎨 **K25 Palette Support:** Tích hợp bảng màu chuẩn của quân phục K25 (Xanh lục bảo, xanh rêu, nâu đất, đen dã chiến,...).
- 🧩 **Pixel Pattern Simulation:** Mô phỏng thuật toán vết loang hạt pixel (Procedural Noise / Cellular Automata / Perlin Noise).
- 🖼️ **Export Output:** Hỗ trợ xuất kết quả ra định dạng hình ảnh (PPM/BMP/PNG) hoặc hiển thị ma trận ASCII trên terminal.
- ⚡ **High Performance:** Lập trình tối ưu hiệu năng bằng C++.

---

## 🛠️ Yêu cầu hệ thống (Prerequisites)

Để biên dịch và chạy dự án, bạn cần chuẩn bị:

- **Trình biên dịch C++:** GCC/G++ (hỗ trợ C++17 trở lên) hoặc Clang, MSVC (Visual Studio).
- **Công cụ Build (Tùy chọn):** `CMake` (phiên bản >= 3.10) hoặc `Make`.
- **Thư viện phụ thuộc (nếu có):**OpenCV, stb_image, etc...

---

## 🚀 Hướng dẫn cài đặt & Biên dịch (Building & Running)

### 1. Clone repository

```bash
git clone https://github.com/username/k25-digital-camo-generator.git
cd k25-digital-camo-generator
```

### 2. Biên dịch (Compilation)

**Sử dụng g++ trực tiếp:**
```bash
g++ -std=c++17 -O3 src/main.cpp -o camo_gen
```

**Hoặc sử dụng CMake:**
```bash
mkdir build && cd build
cmake ..
make
```

### 3. Chạy chương trình (Execution)

```bash
./camo_gen --key "K25-VIETNAM-DEFENSE-2025" --width 800 --height 600
```

---

## 💻 Cách sử dụng (Usage & Parameters)

| Tham số | Mô tả | Mặc định |
| :--- | :--- | :--- |
| `--key`, `-k` | Khóa sinh họa tiết (Seed/Key string) | `DEFAULT_K25_KEY` |
| `--width`, `-w` | Chiều rộng ảnh (pixels) | `1024` |
| `--height`, `-h` | Chiều cao ảnh (pixels) | `768` |
| `--scale`, `-s` | Kích thước hạt pixel ngụy trang | `8` |
| `--output`, `-o` | Tên file đầu ra (`.png`, `.bmp`, `.ppm`) | `k25_output.png` |

---

## 🔬 Nguyên lý hoạt động (Algorithm Overview)

1. **Key Hashing:** Chuỗi key đầu vào được băm (hash) để tạo ra các hằng số khởi tạo ngẫu nhiên (Pseudo-Random Seed).
2. **Noise Generation:** Sử dụng các thuật toán sinh nhiễu (như Perlin Noise / Simplex Noise hoặc Cellular Automata) kết hợp với hạt ngẫu nhiên từ Key.
3. **Quantization & Color Mapping:** Phân giải khoảng giá trị nhiễu thành các mức pixel cố định và gán màu tương ứng theo bảng màu K25.

---

## 📸 Kết quả mô phỏng (Preview)

*(Bạn có thể thêm hình ảnh demo kết quả chạy được vào thư mục `assets/` và liên kết ở đây)*

```
[Demo Image Placeholder: assets/k25_demo.png]
```

---

## 🤝 Đóng góp (Contributing)

Mọi đóng góp nhằm cải thiện thuật toán, tối ưu hiệu năng hoặc hoàn thiện bảng màu K25 đều được hoan nghênh!

1. Fork dự án
2. Tạo branch tính năng (`git checkout -b feature/AmazingFeature`)
3. Commit thay đổi (`git commit -m 'Add some AmazingFeature'`)
4. Push lên branch (`git push origin feature/AmazingFeature`)
5. Tạo một **Pull Request**

---

## 📜 Giấy phép (License)

Dự án này được phân phối dưới giấy phép **MIT License**. Xem file `LICENSE` để biết thêm chi tiết.

---

## ✉️ Liên hệ (Contact)

- **Tác giả:** Misa Nguyen
- **Email:** Phucnx20252203@sis.hust.edu.vn
- **GitHub:** [@Misasef23-eng](https://github.com/Misasef23-eng)