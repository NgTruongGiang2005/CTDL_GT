# Bài 4: Sort binary array in linear time
*(Xắp xếp mảng nhị phân trong thời gian tuyến tính )*

---
## 1. Đề bài
Cho 1 mảng nhị phân chỉ gồm các phần tử $0$ và $1$. Yêu cầu xắp xếp lại mảng sao cho các phần tử $0$ nằm ở đầu mảng sau đó đến các phần tử $1$.
* **Ví dụ:**
    * **input:** `arr =[0, 1, 1, 0, 1, 0, 0 ]
    * **output:**
        ```text 
        Mang sau khi sap xep: [0 0 0 0 1 1 1]
        ```
 
 ---        
## 2. Giải thuật chi tiết
### Phương Pháp: Đếm số lượng phần tử 
#### **Ý tường:**
1. Duyệt qua mảng 1 lần duy nhất để đếm số lượng phần tử $0$ xuất hiện (gọi là `zero_count` ).
2. Gán tất cả `zero_count` phần tử đầu tiên của mảng bằng $0$.
3.Gán các vị trí còn lại từ `zero_count` đến $n-1$ bằng $1$.
#### **Các bước thực hiện:**
1. **Nhập dữ liệu & Cấp phát bộ nhớ:**
   * Nhập số lượng phần tử $n$.
   * Nhập các phần tử của mảng nhị phân trên cùng một dòng (phân tách bởi dấu cách).
2. **Sắp xếp mảng:**
   * Duyệt qua mảng từ $0$ đến $n - 1$, đếm tổng số phần tử bằng $0$.
   * Vòng lặp thứ nhất: Gán `arr[i] = 0` với $i$ chạy từ $0$ đến `zero_count - 1`.
   * Vòng lặp thứ hai: Gán `arr[i] = 1` với $i$ chạy từ `zero_count` đến $n - 1$.
3. **In kết quả & Giải phóng bộ nhớ:**
   * In mảng đã sắp xếp ra màn hình theo định dạng chuẩn `[ 0, 0, ..., 1, 1 ]`.
   
---
 ## 3. Các trường hợp kiểm tra(Test case)
 * **Test case 1: mảng ngẫu nhiên**
    * **input:** `arr = [0, 0, 1, 0, 1, 1 ,0]`
    * **output:** 
    ``` text 
    Mang sau khi sap xep: [0 0 0 0 1 1 1 ] 
    ```
 * **Test case 2: mảng chỉ gồm 1 phần tử $0$ hoặc $1$.**
    * **input:** `arr = [0, 0, 0, 0]
    * **output:** 
    ```text 
    Mang sau khi sap xep: [0 0 0 0 ]
    ```
    ---   