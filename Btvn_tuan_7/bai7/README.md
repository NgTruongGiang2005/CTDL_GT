# Bài 7: Sort an Array in One Swap Whose Two Elements Are Swapped
*(Sắp xếp lại mảng tăng dần trong 1 phép hoán đổi khi có 2 phần tử bị đảo vị trí)*

---

## 1. Đề Bài 
Cho một mảng các số nguyên `arr` vốn đã được sắp xếp tăng dần, nhưng có đúng 2 phần tử bị hoán đổi vị trí cho nhau. Yêu cầu khôi phục mảng về trạng thái sắp xếp tăng dần ban đầu . Giả thiết các phần tử trong mảng là duy nhất (không có phần tử trùng lặp).

* **Ví dụ:**
  * **Input 1:** `arr[] = [3, 8, 6, 7, 5, 9]`  
  * **Output 1:** `[3, 5, 6, 7, 8, 9]` 

  * **Input 2:** `A[] = [3, 5, 7, 6, 8, 9]` 
  * **Output 2:** `[3, 5, 6, 7, 8, 9]` 
---

## 2. Mô Tả Giải Thuật Chi Tiết
### Phương pháp: Duyệt tuyến tính xác định cặp điểm nghịch thế (Linear Scan)

#### **Ý tưởng:**
Trong một mảng sắp xếp tăng dần, điều kiện $\text{arr}[i] \le \text{arr}[i+1]$ luôn đúng với mọi $i$. Khi 2 phần tử bị đổi chỗ, sẽ xuất hiện hiện tượng vi phạm quy luật ($\text{arr}[i] > \text{arr}[i+1]$):

1. **Trường hợp 1 (2 phần tử bị đổi nằm không kề nhau):**
   * Xuất hiện 2 vị trí vi phạm:
     * Vi phạm đầu tiên tại chỉ số $i$: phần tử lớn hơn bị đẩy về trước, lưu chỉ số $x = i$.
     * Vi phạm thứ hai tại chỉ số $j$: phần tử nhỏ hơn bị đẩy về sau, lưu chỉ số $y = j + 1$.
2. **Trường hợp 2 (2 phần tử bị đổi nằm kề nhau):**
   * Chỉ xuất hiện 1 vị trí vi phạm duy nhất tại chỉ số $i$:
     * Gán $x = i$ và $y = i + 1$.

#### **Các bước thực hiện:**
1. **Nhập dữ liệu & Cấp phát bộ nhớ:**
   * Nhập số lượng phần tử $n$.
   * Nhập các phần tử của mảng từ bàn phím trên cùng 1 dòng.
2. **Xác định 2 phần tử bị hoán đổi:**
   * Khởi tạo `x = -1`, `y = -1`.
   * Duyệt `i` từ `0` đến `n - 2`:
     * Nếu `arr[i] > arr[i + 1]`:
       * Nếu `x == -1` (lần vi phạm đầu): gán `x = i` và `y = i + 1`.
       * Ngược lại (lần vi phạm thứ hai): cập nhật `y = i + 1`.
3. **Hoán đổi và In kết quả:**
   * Thực hiện hoán đổi giá trị giữa `arr[x]` và `arr[y]`.
   * In mảng đã khôi phục ra màn hình .

---
## 3. Các trường hợp kiểm tra(Test Cases)

* **Test Case 1: 2 phần tử bị hoán đổi nằm xa nhau**
    * **Input:** `arr = [1, 2, 8, 4, 5, 3 ]`
    * **output:**
    ``` text
    Mang sau khi sap xep: [1, 2, 3, 4, 5, 8 ]
    ```
* **Test Case 2: 2 phần tử bị hoán đổi nằm gần  nhau**
    * **Input:** `arr = [1, 2, 4, 3, 5, 8]`
    * **output:**
    ``` text
    Mang sau khi sap xep: [1, 2, 3, 4, 5, 8 ]   
     ```
---
