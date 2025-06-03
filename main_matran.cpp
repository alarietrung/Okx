#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    // Phan code ban dau voi mang co dinh
/*    int a[3][4] = {
        {1, 2, 3, 1},
        {4, 1, 5 ,2},
        {3, 7, 9, 0}
    };
    cout << "a[0][2] = " << a[0][2] << endl;
    cout << "a[1][3] = " << a[1][3] << endl;
    cout << "a[0][0] = " << a[0][0] << endl;
    cout << "a[4][4] = " << a[4][4] << endl;
    cout << "a[3][4] = " << a[3][4] << endl;
    */

    // Phan code nhap lieu mang tu nguoi dung
    int n, m; // n: hang, m: cot
    int b[205][205]; 

    cout << "Nhap so hang: ";
    cin >> n;
    cout << "Nhap so cot: ";
    cin >> m;

    cout << "Nhap cac phan tu cua mang:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> b[i][j];
        }
    }

    cout << "Mang vua nhap :" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << b[i][j] << " "; 
        }
        cout << endl; 
    }
    return 0;
}
