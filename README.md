# BÀI TẬP THÁP HÀ NỘI - CTDL & GT

## 1. Danh sách file
- `de_quy.cpp`: Cài đặt giải thuật đệ quy.
- `khu_de_quy.cpp`: Cài đặt giải thuật khử đệ quy (dùng Stack).
- `README.md`: Mô tả giải thuật và test cases.

---

## 2. Diễn giải giải thuật

### a. Phương pháp Đệ Quy (`de_quy.cpp`)
- **Bài toán cơ sở**: Khi $N = 1$, di chuyển 1 đĩa trực tiếp từ cọc nguồn sang cọc đích.
- **Các bước đệ quy**:
  1. Chuyển $N-1$ đĩa từ cọc gốc sang cọc trung gian.
  2. Chuyển đĩa thứ $N$ từ cọc gốc sang cọc đích.
  3. Chuyển $N-1$ đĩa từ cọc trung gian sang cọc đích.

### b. Phương pháp Khử Đệ Quy (`khu_de_quy.cpp`)
- **Ý tưởng**: Sử dụng `std::stack` lưu trạng thái `Frame` để mô phỏng lại bộ nhớ Call Stack của hệ thống.
- **Các bước thực hiện**: Duyệt vòng lặp `while` trên Stack, dựa vào biến trạng thái `stage` (0, 1, 2) để thực hiện tuần tự các bước chuyển đĩa tương tự đệ quy mà không cần gọi lại hàm.

---

## 3. Test Cases (Kiểm thử)

### Test Case 1: $N = 1$
- **Input**: `1`
- **Output**:
  text
  chuyen dia 1 tu coc A sang coc C
  

### Test Case 2: $N = 3$
- **Input**: `3`
- **Output**:
  text
  chuyen dia 1 tu coc A sang coc C
  chuyen dia 2 tu coc A sang coc B
  chuyen dia 1 tu coc C sang coc B
  chuyen dia 3 tu coc A sang coc C
  chuyen dia 1 tu coc B sang coc A
  chuyen dia 2 tu coc B sang coc C
  chuyen dia 1 tu coc A sang coc C
  
  