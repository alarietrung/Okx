#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    int thang, nam;
    cout << "Nhap thang (1-12): ";
    cin >> thang;
    cout << "Nhap nam: ";
    cin >> nam;
    int soNgay;
    switch (thang) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            soNgay = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            soNgay = 30;
            break;
        case 2:
            if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0)) {
                soNgay = 29; 
            } else {
                soNgay = 28; 
            }
            break;
        default:
            cout << "Thang khong hop le." << endl;
            return 1; 
    }
    cout << "Thang " << thang << " nam " << nam << " co " << soNgay << " ngay." << endl;
    return 0; 
}
