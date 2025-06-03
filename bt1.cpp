#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    // Ví dụ 1: Cộng hai số cơ bản (đang được bỏ qua)
    /*
    float a, b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    float sum = a + b;
    cout << "Tong cua a va b la: " << sum << endl;
    */
    // Ví dụ 2: Tính diện tích và chu vi hình chữ nhật (đang được bỏ qua)
    /*
    float d, r, dt, cv;
    cout << "Nhap chieu dai: ";
    cin >> d;
    cout << "Nhap chieu rong: ";
    cin >> r;
    dt = d * r;
    cv = (d + r) * 2;
    cout << "Dien tich hinh chu nhat la: " << dt << endl;
    cout << "Chu vi hinh chu nhat la: " << cv << endl;
    */
    // Ví dụ 3: Giải phương trình bậc nhất ax + b = 0
    float a, b, x;
    cout << "GIAI PHUONG TRINH BAC NHAT: ax + b = 0" << endl;
    cout << "------------------------------------" << endl;
    cout << "Nhap vao he so a: ";
    cin >> a;
    cout << "Nhap vao he so b: ";
    cin >> b;
if (a == 0) { 
        if (b == 0) { 
            cout << "Phuong trinh co vo so nghiem." << endl; 
        } else { 
            cout << "Phuong trinh vo nghiem." << endl; 
        }
    } else { 
        x = -b / a; 
        cout << "Nghiem cua phuong trinh la: x = " << x << endl;
    }
    return 0;
}
