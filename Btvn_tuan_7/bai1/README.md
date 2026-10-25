# Bài 1: Find All Pairs With a Given Sum in an Array
*(Tìm tất cả các cặp phần tử có tổng bằng giá trị cho trước)*

---

## 1. Đề bài 

Cho một mảng chưa sắp xếp các số nguyên gồm $n$ phần tử và một giá trị đích `target`. Hãy tìm và in ra tất cả các cặp phần tử $(arr[i], arr[j])$ sao cho $arr[i] + arr[j] = target$.

* **Ví dụ:**
  * **Input:** `arr = [1,3,5,7,8,2]`, `target = 10`
  * **Output:** 
    ```text
    Pair found: (2,8)
    Pair found: (3,7)
    ```

---

## 2. Mô tả giải thuật chi tiết 

### Phương pháp: Sắp xếp Quick Sort + 2 Con trỏ (Two Pointers)

#### **Ý tưởng:**
1. Một mảng đã được sắp xếp tăng dần cho phép ta sử dụng hai con trỏ `low` (ở đầu mảng) và `high` (ở cuối mảng) để duyệt tìm các cặp số một cách hiệu quả.
2. Nếu tổng $arr[low] + arr[high] == target$: Ta tìm thấy 1 cặp hợp lệ. Để tiếp tục tìm các cặp khác trong mảng, dịch con trỏ `low` sang phải (`low++`) và `high` sang trái (`high--`).
3. Nếu tổng $arr[low] + arr[high] < target$: Tổng hiện tại nhỏ hơn `arr` thì cần tăng giá trị nên dịch `low` sang phải (`low++`).
4. Nếu tổng $arr[low] + arr[high] > target$: Tổng hiện tại lớn hơn `target` thì cần giảm giá trị nên dịch `high` sang trái (`high--`).

#### **Các bước thực hiện:**
1. **Nhập dữ liệu & Cấp phát bộ nhớ:**
   * Nhập số lượng phần tử $n$.
   * Cấp phát bộ nhớ động bằng `malloc()` để lưu $n$ số nguyên.
   * Nhập mảng và giá trị `target`.
2. **Sắp xếp mảng (Quick Sort tự cài đặt):**
   * Chọn phần tử chốt (Pivot) ở đầu đoạn `arr[low]`.
   * Phân hoạch (Partition) đưa các số lớn hơn Pivot về bên phải và các số nhỏ hơn về bên trái.
   * Đệ quy sắp xếp hai nửa.
3. **Duyệt 2 con trỏ tìm tất cả các cặp:**
   * Khởi tạo `low = 0`, `high = n - 1`, biến cờ `found = 0`.
   * Trong khi `low < high`:
     * Tính `sum = arr[low] + arr[high]`.
     * Nếu `sum == target`: In cặp `(arr[low], arr[high])`, gán `found = 1`, tăng `low++`, giảm `high--`.
     * Nếu `sum < target`: Tăng `low++`.
     * Nếu `sum > target`: Giảm `high--`.
   * Nếu `found == 0` sau khi kết thúc lặp, in ra `Pair not found`.
4. **Giải phóng bộ nhớ:**
   * Thu hồi vùng nhớ đã cấp phát bằng `free()`.

---

## 3. Các trường hợp kiểm tra(Test case)

* **Test case 1: tìm ra 1 cặp thỏa mãn** 
  * input: `n=5`; `arr = [6, 3, 5, 1, 8]` ; `tarrget = 7`
  * output:  
  ```text
  Pair found: (1,6)
  ``` 

* **Test case 2: tìm ra nhiều cặp thỏa mãn**
  * input: `n=5` ; `arr = [1, 3, 8, 6, 5]` ; `tarrget = 9`
  * output: 
  ```text
  Pair found: (1,8)
  Pair found: (3,6) 
  ```
* **Test case 3: không tìm ra cặp thỏa mãn**
  * input:`n=5` ; `arr = [1, 8, 5, 3, 6]` ; `tarrget = 10`
  * output:
  ```text
  Pair not found
---