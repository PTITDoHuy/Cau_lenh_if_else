# Chi phí giao hàng
## Đề bài
  Viết chương trình C++ để tính chi phí giao hàng của một công ty vận chuyển. Chủ yếu, hãy nhập vào số lượng hàng cần vận chuyển và khoảng cách giữa nơi xuấ phát và nơi nhận hàng.

Giá tiền được tính theo cách sau:

- Nếu khoảng cách nhỏ hơn hoặc bằng 100 km, mỗi 1 kg hàng sẽ có giá là 10 USD.
- Nếu khoảng cách từ 101 km đến 500 km, mỗi 1 kg hàng sẽ có giá là 8 USD.
- Nếu khoảng cách lớn hơn 500 km, mỗi 1 kg hàng sẽ có giá là 6 USD.
#### Dữ liệu
- Dòng đầu tiên là số nguyên n là số lượng hàng cần vận chuyển(kg). (1 ≤ n ≤ 10^5)
- Dòng thứ hai là số nguyên k là khoảng cách giao hàng cần vận chuyển(km). (1 ≤ k ≤ 10^5)
#### Kết quả
- In ra tổng số tiền phải thanh toán m(USD).

#### Ví dụ
##### Input
>  200
>  450
##### Output
>  1600

