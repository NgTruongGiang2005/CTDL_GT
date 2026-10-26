# Bài 9: Find the Maximum Product of Two Integers in an Array
*(Tìm tích lớn nhất của 2 số nguyên trong mảng)*

---

## 1. Đề Bài 
Cho một mảng các số nguyên `arr` gồm $n$ phần tử ($n \ge 2$). Hãy tìm hai phần tử trong mảng sao cho tích của chúng đạt giá trị lớn nhất.

* **Ví dụ 1:**
  * **Input:** `arr = [-10, -3, 5, 6, -2]`
  * **Output:** `The maximum product is 30`

* **Ví dụ 2:**
  * **Input:** `arr = [-10, -3, 0, 1, 2]`
  * **Output:** `The maximum product is 30` 

---

## 2. Mô Tả Giải Thuật Chi Tiết 
### Phương pháp: Duyệt Tuyến Tính ( Linear Scan)

#### **Nguyên lý Toán học:**
Tích của hai số nguyên trong mảng đạt giá trị cực đại có thể đến từ một trong hai khả năng:
1. Tích của **hai số dương lớn nhất** trong mảng (`max1 * max2`).
2. Tích của **hai số âm nhỏ nhất** (có giá trị tuyệt đối lớn nhất) trong mảng (`min1 * min2`).

 ta khởi tạo 4 giá trị `max1, max2, min1, min2` trực tiếp từ hai phần tử đầu tiên của mảng (`arr[0]` và `arr[1]`).

#### **Các bước thực hiện:**
1. **Nhập dữ liệu & Cấp phát bộ nhớ:**
   * Nhập số lượng phần tử $n$ ($n \ge 2$).
   * Nhập các phần tử của mảng từ bàn phím trên cùng một dòng.
2. **Khởi tạo & Duyệt mảng:**
   * So sánh `arr[0]` và `arr[1]`:
     * Số lớn hơn gán cho `max1`, số nhỏ hơn gán cho `max2`.
     * Số nhỏ hơn gán cho `min1`, số lớn hơn gán cho `min2`.
   * Vòng lặp `i` chạy từ `2` đến $n - 1$:
     * Nếu `arr[i] > max1`: ta gán  `max2 = max1` và `max1 = arr[i]`.
     * Ngược lại nếu `arr[i] > max2`: gán`max2 = arr[i]`.
     * Nếu `arr[i] < min1`: ta gán `min2 = min1` và `min1 = arr[i]`.
     * Ngược lại nếu `arr[i] < min2`: gán `min2 = arr[i]`.
3. **So sánh & In kết quả:**
   * Tính tích `p1 = (long long)max1 * max2` và `p2 = (long long)min1 * min2` để tránh tràn số.
   * Nếu `p1 >= p2`, in giá trị tích cặp `(max1, max2)`; ngược lại in giá trị tích cặp `(min1, min2)`.
   

---

## 3. Các trường hợp kiểm tra (Test Cases)

* **Test Case 1: Mảng gồm cả số âm và số dương**
    * **Input:** `arr = [-1, -3, -5, 6, 7 ]`
    * **output:** 
    ``` text
    The maximum product is 42
    ```
* **Test Case 2: Mảng chỉ bao gồm số dương**
    * **Input:** `arr = [1, 3, 5, 6, 7 ]`
    * **output:** 
    ``` text
    The maximum product is 42
    ```    
* **Test Case 3: Mảng chỉ bao gồm số âm **
    * **Input:** `arr = [-1, -3, -5, -9, -7 ]`
    * **output:** 
    ``` text
    The maximum product is 63
    ```
* **Test Case 4: Mảng bao gồm số âm, số dương và phần tử $0$ **
    * **Input:** `arr = [-1, 3, 0 ]`
    * **output:** 
    ``` text
    The maximum product is 0
    ```
    ---
    