# Bài 10: Find Maximum Length Subarray Having a Given Sum
*(Tìm mảng con có độ dài lớn nhất có tổng bằng giá trị cho trước)*

---

## 1. Đề Bài 

Cho một mảng các số nguyên `nums` gồm $n$ phần tử và một giá trị đích `target`. Hãy tìm mảng con liên tiếp có độ dài lớn nhất sao cho tổng các phần tử trong mảng con đó đúng bằng `target`.

* **Ví dụ:**
  * **Input:** `nums = [5, 6, -5, 5, 3, 5, 3, -2, 0]`, `target = 8`
  * **Các mảng con có tổng bằng 8:**
    * `{-5, 5, 3, 5}` (độ dài 4)
    * `{3, 5}` (độ dài 2)
    * `{5, 3}` (độ dài 2)
  * **Output:** `The longest subarray is { -5, 5, 3, 5 } having length 4`

---

## 2.  Giải Thuật Chi Tiết 

### Phương pháp: Vét cạn hai vòng lặp lồng nhau (Two Nested Loops)

#### **Ý tưởng:**
1. Duyệt qua tất cả các cặp chỉ số bắt đầu `i` và chỉ số kết thúc `j` của mọi mảng con liên tiếp có thể tạo thành ($0 \le i \le j < n$).
2. Tính tổng cộng dồn `sum` của từng mảng con từ `i` đến `j`.
3. Khi gặp `sum == target`, ta tính độ dài mảng con $\text{length} = j - i + 1$.
4. So sánh `length` với biến lưu độ dài lớn nhất `max_length`. Nếu `length > max_length`, sửa lại `max_length` cùng 2 chỉ số vị trí `max_start` và `max_end`.

#### **Các bước thực hiện:**
1. **Nhập dữ liệu:**
   * Nhập số lượng phần tử $n$.
   * Nhập các phần tử của mảng và giá trị `target` từ bàn phím trên cùng một dòng.
2. **Tìm mảng con dài nhất:**
   * Khởi tạo `max_length = 0`, `max_start = -1`, `max_end = -1`.
   * Vòng lặp `i` chạy từ `0` đến `n - 1`.
   * Khởi tạo `sum = 0`.
   * Vòng lặp `j` chạy từ `i` đến `n - 1`, tính `sum += arr[j]`.
   * Nếu `sum == target`: Kiểm tra và cập nhật `max_length`, `max_start`, `max_end`.
3. **In kết quả:**
   * Nếu `max_length > 0`, in ra mảng con dài nhất tìm được kèm độ dài của nó.
   * Nếu `max_length == 0`, in thông báo không tìm thấy.

---



## 3. Các trường hợp kiểm tra(Test Cases)

* **Test Case 1: Tồn tại nhiều mảng con thỏa mãn**
    * **Input:**`arr =[5, 6, -5, 5, 3, 5, 3, -2, 0]` `target = 8`
    * **output:**
    ``` text
    The longest subarray is { -5, 5, 3, 5 } having length 4
    ```
* **Test Case 2: mảng chỉ gồm các phần tử không âm**
    * **Input:**`arr =[5, 6, 0, 3, 4, 5, 2, 2, 0, 1]` `target = 9`
    * **output:**
    ``` text
    The longest subarray is [ 5, 2, 2, 0 ] having length 4
    ```    
* **Test Case 3: Không tồn tại mảng con thỏa mãn**
    * **Input:**`arr =[5, 6, 0, 3, 4, 5, 2, 2, 0, 1]` `target = 8`
    * **output:**
    ``` text
    No subarray with the given sum exists
    ```        
    ---
