#include <iostream>
#include <cmath>     // Thư viện cần thiết cho hàm pow()
#include <limits>    // Thư viện cần thiết để xử lý lỗi nhập liệu tốt hơn
using namespace std;
int main() {
    float x; 
    int n;    
    // --- Nhập cơ số x 
    cout << "Nhap vao co so thuc x: ";
    cin >> x;
    // --- Nhập số mũ n 
    cout << "Nhap vao so mu nguyen n: ";
    cin >> n;
    // Trường hợp đặc biệt: 0 mũ số âm là không xác định (chia cho 0)
    if (x == 0.0 && n < 0) {
        cout << "Loi: Khong the tinh 0 mu so am (vi gay ra phep chia cho 0)." << endl;
        return 1; // Kết thúc với mã lỗi
    } else {
        // Sử dụng hàm pow(base, exponent) từ thư viện cmath
        // Hàm này xử lý các trường hợp n dương, n âm và n = 0
        float ket_qua = pow(x, n);
        // --- In kết quả ---
        cout << x << "^" << n << " = " << ket_qua << endl;
    }
    return 0; 
}