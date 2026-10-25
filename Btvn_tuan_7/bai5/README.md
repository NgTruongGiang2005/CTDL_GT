# Bài 5: Find the duplicate element in a limited range array
*(Cho mảng có giá trị giới hạn tìm phần tử lặp lại)*

---
## 1. Đề bài
Cho 1 mảng `arr` gồm n phần tử , trong đó các phần tử nhận giá trị bắt đầu từ $1$ đến $n-1$, biết trong đó có 1 phần tử trùng lặp. Yêu cầu tìm và in ra phần tử đó
* **Ví dụ**
  * **input:** `arr =[1, 2, 3, 4, 5, 7, 6, 2]`
  * **output:**
  ``` text
   Phan tu trung lap la: 2
   ```
   ---
## 2. Giải thuật chi tiét
### Phương pháp: Dùng công thức tính tổng( Sum Formula approach)
#### **Ý tưởng:**
Ta tính tổng thực tế của các phần tử trong mảng đặt là `actua_sum` . Dùng công thức tính tổng các phần tử theo lý thuyết là: $$\frac{(n - 1) \cdot n}{2}$$
biết giá trị phần tử nằm từ 1 đến n-1. Khi đó lấy hiệu của tổng thực tế và tổng lý thuyết sẽ ra kết quả là phần tử bị trùng lặp.
####  **Các bước thực hiện**
 1. **Nhập dữ liệu và Cấp phát bộ nhớ:**
   * Nhập số lượng phần tử $n$.
   * Sử dụng `malloc()` để cấp phát động mảng `arr` trên vùng nhớ Heap.
   * Nhập các phần tử của mảng từ bàn phím trên cùng một dòng (phân tách bởi dấu cách).
2. **Tính toán số trùng lặp:**
   * Duyệt qua mảng 1 lần để tính `actual_sum`.
   * Tính `expected_sum = (n - 1) * n / 2`.
   * Lấy `duplicate = actual_sum - expected_sum`.
3. **In kết quả & Giải phóng bộ nhớ:**
   * In phần tử trùng lặp `duplicate` ra màn hình.
   * Thu hồi vùng nhớ đã cấp phát bằng lệnh `free(arr)`.

---
## 3. Các trường hợp kiểm tra(Test case)
* **Test case 1: mảng sắp xếp ngẫu nhiên**
    * **input:** `arr = [1, 3, 2, 4, 7, 5, 6, 2 ]`
    * **output:**
    ```text
    Phan tu trung lap la: 2
    ```
* **test case 2: Số trùng lặp ở cuối mảng**
    * **input:** `arr = [1, 2, 3, 4, 5, 6, 7, 2 ]`
    * **output:**
    ```text
    Phan tu trung lap la: 2
    ``` 
* **test case 3: Số trùng lặp ở đầu mảng**
    * **input:** `arr = [2, 1, 2, 3, 4, 5, 6, ]`
    * **output:**
    ```text
    Phan tu trung lap la: 2
    ``` 
    ---
    


