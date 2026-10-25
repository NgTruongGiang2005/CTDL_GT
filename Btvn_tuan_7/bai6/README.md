# Bài 6: Sort an Array of 0’s, 1’s, and 2’s (Dutch National Flag Problem)
*(Sắp xếp mảng gồm các số 0, 1 và 2 trong thời gian tuyến tính)*

---

## 1. Đề Bài (Problem Statement)

Cho một mảng chỉ chứa các số nguyên $0$, $1$ và $2$. Hãy sắp xếp mảng theo thứ tự tăng dần sao cho tất cả các số $0$ nằm ở đầu mảng, tiếp theo là tất cả các số $1$, và cuối cùng là tất cả các số $2$.


* **Ví dụ:**
  * **Input:** `arr = [0, 1, 2, 1, 0, 0, 2, 0, 1, 1, 0]`
  * **Output:** `[ 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2 ]`

---

## 2. Mô Tả Giải Thuật Chi Tiết 
### Phương pháp: Đếm số lượng phần tử 
#### **Ý tưởng:**
Mảng chỉ bao gồm đúng 3 loại giá trị phân biệt là $0$, $1$ và $2$. Do đó, ta chỉ cần:
1. Duyệt qua mảng một lần duy nhất để đếm số lượng xuất hiện của từng giá trị: `count0`, `count1`, và `count2`.
2. Ghi đè lại mảng theo thứ tự:
   * Điền `count0` số $0$ vào đầu mảng.
   * Tiếp theo điền `count1` số $1$.
   * Cuối cùng điền `count2` số $2$.

#### **Các bước thực hiện:**
1. **Nhập dữ liệu & Cấp phát bộ nhớ:**
   * Nhập số lượng phần tử $n$.
   * Cấp phát động mảng `arr` trên vùng nhớ Heap bằng `malloc()`.
   * Nhập các phần tử từ bàn phím trên cùng một dòng.
2. **Sắp xếp mảng:**
   * Duyệt qua mảng từ $0$ đến $n - 1$ để tính các biến đếm `count0`, `count1`, `count2`.
   * Dùng biến chỉ số `index = 0` để ghi đè lần lượt các giá trị $0, 1, 2$ vào mảng ban đầu.
3. **In kết quả & Giải phóng bộ nhớ:**
   * In mảng đã sắp xếp ra màn hình theo định dạng `[ 0, ..., 1, ..., 2 ]`.
   * Thu hồi vùng nhớ đã cấp phát bằng lệnh `free()`.

---


## 3. Các trường hợp kiểm tra(Test Cases)

* **Test Case 1: Mảng gồm đầy đủ 0, 1, 2 xáo trộn**
    * **input:**  `arr = [0, 0, 1, 2, 2, 1, 2, 0]`
    * **outout:**
    ```text
    Mang sau khi sap xep: [ 0, 0, 0, 1, 1, 2, 2, 2]
    ```
 * **Test Case 2: Mảng không đủ 3 loại phần tử xáo trộn**
    * **input:**  `arr = [0, 0, 2, 2, 2, 0]`
    * **outout:**
    ```text
    Mang sau khi sap xep: [ 0, 0, 0, 2, 2, 2]
    ```   
 * **Test Case 3: Mảng chỉ có 1 loại phần tử **
    * **input:**  `arr = [1, 1, 1]`
    * **outout:**
    ```text
    Mang sau khi sap xep: [1, 1, 1]
    ```   
    ---
