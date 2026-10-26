# Bài 8: Move all zeros present in an array to the end
*(chuyển tất cả phần tử giá trị 0 của 1 mảng về cuối)*
---
## 1. Đề bài
Cho 1 mảng `arr` gồm n phần tử chứa các phần tử giá trị $0$. Yêu cầu chuyển các giá trị $0$ về phía cuối mảng và giữ nguyên thứ tự của các phần tử còn lại. 
* **Ví dụ:**
    * **input:** `arr = [ 1, 0, 0, 2, 4, 5, 0]`
    * **output:** 
     ```text
      Mang sau khi sap xep: [ 1, 2, 4, 5, 0, 0, 0]
    ```
 ---
 ## 2. Giải thuật chi tiết 
 ### Phương pháp: Con trỏ dồn hàng (Partition/Overwrite Approach)

#### **Ý tưởng:**
Sử dụng một con trỏ ghi `a` khởi tạo bằng `0` để đánh dấu vị trí chuẩ bị chứa phần tử khác $0$ tiếp theo:
1. Duyệt từ đầu đến cuối mảng qua biến chỉ số `i`.
2. Bất kỳ khi nào gặp `arr[i] != 0`, ta gán `arr[a] = arr[i]` và tăng `a` lên $1$ đơn vị. Việc này giúp thu gom toàn bộ các số khác $0$ dồn liên tiếp về đầu mảng mà vẫn bảo toàn tuyệt đối thứ tự ban đầu của chúng.
3. Sau khi duyệt hết mảng, biến `a` sẽ chỉ tới vị trí kết thúc của chuỗi phần tử khác $0$. Ta chỉ cần chạy vòng lặp gán `arr[a] = 0` cho các vị trí từ `a` đến $n - 1$.

#### **Các bước thực hiện:**
1. **Nhập dữ liệu:**
   * Nhập số lượng phần tử $n$.
   * Nhập các phần tử của mảng từ bàn phím trên cùng một dòng.
2. **Dồn các số 0 về cuối:**
   * Khởi tạo `a = 0`.
   * Vòng lặp 1: `i` chạy từ `0` đến `n - 1`. Nếu `arr[i] != 0` thì gán `arr[a++] = arr[i]`.
   * Vòng lặp 2: Chạy từ `a` đến `n - 1` và gán `arr[a++] = 0`.
3. **In kết quả :**
   * In mảng kết quả ra màn hình.
   
---     
## 3. Các trường hợp kiểm tra (Testcase)
* **Test case 1: Mảng ngẫu nhiên chứa phần tử $0$**
    * **input:** `arr = [1, 0, 2, 0, 3, 0, 0, 5]`
    * **output:**
    ```text
     Mang sau khi sap xep: [1, 2, 3, 5, 0, 0, 0, 0]
     ```
* **Test case 2: Mảng chỉ chứa phần tử $0$**
    * **input:** `arr = [0, 0, 0, 0]`
    * **output:**
    ```text
     Mang sau khi sap xep: [0, 0, 0, 0]
     ```     
* **Test case 3: Mảng không chứa phần tử $0$**
    * **input:** `arr = [1, 3, 5, 2]`
    * **output:**
    ```text
     Mang sau khi sap xep: [1, 3, 5, 2]
     ```          
---
     