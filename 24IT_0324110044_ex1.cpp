#include <iostream>
#include <limits> // Thêm thư viện này để xử lý input tốt hơn

using namespace std;
int main() {
    int n;
    // Nhập n
    cout << "Nhap vao so nguyen N (N >= 0): ";
    cin >> n;
    if (n < 0) {
        cout << "Khong the tinh tich (giai thua) cho so am." << endl;
    } else {
        // Sử dụng 'long long' cho biến tích vì giai thừa tăng rất nhanh và có thể vượt quá giới hạn của 'int' ngay cả với N nhỏ (vd: 13!). Khởi tạo tích bằng 1 (vì 1 là phần tử đơn vị của phép nhân)
        long long tich = 1;
         // Vòng lặp for để duyệt từ 1 đến N
        // Lưu ý: Nếu N = 0, vòng lặp này sẽ không chạy lần nào,
        // và 'tich' vẫn giữ giá trị 1 (đúng theo định nghĩa 0! = 1)
        for (int i = 1; i <= n; ++i) {
            tich = tich * i; // Nhân dồn i vào biến tích
            // tich *= i; // Cách viết tắt tương đương
        }
        cout << "Tich P(" << n << ") = ";
        if (n > 0) {
            for (int i = 1; i <= n; ++i) {
                cout << i;
                if (i < n) {
                    cout << "*"; 
                }
            }
            cout << " = ";
        } else {
             cout << "1 = "; 
        }
        cout << tich << endl; 
    }
    return 0; 
}