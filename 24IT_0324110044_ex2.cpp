#include <iostream>
#include <string>   // Thêm thư viện string để xây dựng chuỗi phép tính
#include <limits>   // Thêm thư viện limits để xử lý input tốt hơn
using namespace std;
int main() {
    int n;
    // Nhập N 
    cout << "Nhap vao so nguyen N (N >= 1): ";
    cin >> n;
    // Sử dụng 'long long' cho biến tích để tránh tràn số với N lớn
    long long tich_le = 1; // Khởi tạo tích bằng 1

    string phep_tinh_str = ""; // Chuỗi để lưu dạng "1*3*5"

    // Xử lý trường hợp N < 1: không có số lẻ nào trong khoảng từ 1 đến N
    if (n < 1) {
        phep_tinh_str = "1"; // Tích của tập rỗng là 1 (theo quy ước)
        // tich_le đã được khởi tạo là 1
    } else {
        // Vòng lặp for để duyệt từ 1 đến N
        for (int i = 1; i <= n; ++i) {
            // Kiểm tra xem i có phải là số lẻ không
            if (i % 2 != 0) { // i % 2 == 1 cũng tương đương
                // Nếu i là số lẻ, nhân nó vào tích
                tich_le *= i;

                // Thêm số lẻ này vào chuỗi hiển thị phép tính
                if (!phep_tinh_str.empty()) {
                    phep_tinh_str += "*"; // Thêm dấu '*' nếu không phải số lẻ đầu tiên
                }
                phep_tinh_str += to_string(i); // Chuyển i thành chuỗi và nối vào
            }}}
    cout << "Tich cac so LE tu 1 den " << n << " la: P_le(" << n << ") = ";
    cout << phep_tinh_str << " = " << tich_le << endl;

    return 0; 
}