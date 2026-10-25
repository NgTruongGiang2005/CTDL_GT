# Bài 2: Check if a subarray with 0 sum exists or not
*(kiểm tra xem 1 mảng cho sẵn xem có tồn tại mảng con có tổng bẳng 0 hay không?)*

--- 

## 1. Đề bài
Cho 1 mảng các số nguyên `arr` gồm có $n$ phần tử . Kiểm tra xem mảng đó có tồn tại mảng con có tổng bằng 0 hay không?
* **Ví dụ**
  * **input:** `arr = [-1, -2, 3, 5, 6, -4, 2]`
  * **output:**
  ``` text
   Subarray with zero_sum exists
   ```
 --- 
## 2. Giải thuật chi tiết 
### Phương pháp: dùng 2 vòng lặp lồng nhau
#### **Ý tưởng:**
1. Duyệt qua tất cả các cặp chỉ số bắt đầu `i` và chỉ số kết thúc `j` của mọi mảng con liên tiếp có thể tạo thành ($0 \le i \le j < n$).
2. Với mỗi vị trí bắt đầu `i`, ta tính tổng cộng dồn `sum` bằng cách cộng dần từng phần tử `arr[j]` khi `j` chạy từ `i` đến $n - 1$.
3. Khi nào xuất hiện `sum == 0`, ta đánh dấu biến cờ `found = true` thể hiện trong mảng có tồn tại mảng con tổng bằng 0.

#### **Các bước thực hiện:**
1. **Nhập dữ liệu và Cấp phát bộ nhớ:**
   * Nhập số lượng phần tử $n$.
   * Sử dụng `malloc()` để cấp phát động mảng `arr` trên vùng nhớ Heap (nhằm tránh lỗi tràn bộ nhớ Stack khi $n$ lớn).
   * Nhập các phần tử của mảng từ bàn phím trên cùng một dòng (phân tách bởi dấu cách).
2. **Kiểm tra mảng con:**
   * Khởi tạo biến cờ `found = false`.
   * Vòng lặp ngoài: `i` chạy từ `0` đến `n - 1`.
   * Khởi tạo `sum = 0`.
   * Vòng lặp trong: `j` chạy từ `i` đến `n - 1`, tính `sum += arr[j]`.
   * Nếu `sum == 0`: Đánh dấu `found = true`.
3. **Kết luận:**
   * Nếu `found == true`: In thông báo `Subarray with zero_sum exists`.
   * Nếu `found == false`: In thông báo `No subarray with zero_sum found`.
   * Thu hồi vùng nhớ đã cấp phát bằng lệnh `free(arr)`.

---
  ## 3. Các trường hợp kiểm tra(Test case)

  * **Test case 1: tìm ra mảng con thỏa mãn**
    *  **input:**  `arr = [-1, -2, 3, 5, 6, -4, 2]`
    *  **output:**
     ``` text
      Subarray with zero_sum exists
      ```
  * **Test case 2: không có mảng con thỏa mãn**
    * **input:** `arr = [-1, 2, 3, 6, -100, 10 ]`
    * **output:** 
    ``` text
    No subarray with zero_sum found 
    ``` 
---