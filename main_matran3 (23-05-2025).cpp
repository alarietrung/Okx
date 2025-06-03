#include <iostream>
#include <stdio.h> 
using namespace std;

void nhapMang(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu a""["<< i <<"]" ": ";
        cin >> *(arr + i);
    }
}

void xuatMang(int* arr, int n) {
    cout << "Mang da nhap: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << "    "; 
    }
    cout << endl;
}
//tinh tong mang bang con tro
void TongMang(int *arr, int n) { //
    int s=0; //
    for (int i = 0; i < n; i++) { 
        s=s + (*(arr + i)); 
    }
    cout<<"Tong mang ="<<s; 
    cout << endl;
}
// Hàm tính tích các phần tử trong mảng
void TichMang(int *arr, int n) {
    int t = 1; 
    for (int i = 0; i < n; i++) {
        t = t * (*(arr + i));
    }
    cout << "Tich mang = " << t;
    cout << endl;
}

// Hàm tính tổng các phần tử chẵn trong mảng
void TongChanMang(int *arr, int n) {
    int tongChan = 0;
    for (int i = 0; i < n; i++) {
        if ((*(arr + i)) % 2 == 0) { 
            tongChan = tongChan + (*(arr + i));
        }
    }
    cout << "Tong cac phan tu chan trong mang = " << tongChan;
    cout << endl;
}

// Hàm tính tổng các phần tử lẻ trong mảng
void TongLeMang(int *arr, int n) {
    int tongLe = 0;
    for (int i = 0; i < n; i++) {
        if ((*(arr + i)) % 2 != 0) { 
            tongLe = tongLe + (*(arr + i));
        }
    }
    cout << "Tong cac phan tu le trong mang = " << tongLe;
    cout << endl;
}
int main(int argc, char** argv){
/*    int *a; 
    cout << "Dia chi CUA BIEN CON TRO 'a' (&a): " << &a << endl;
    int b = 10; 
    a = &b; 
    cout << "Dia chi MA CON TRO 'a' DANG LUU GIU: " << a << endl;
    cout << "---" << endl; 
    cout << "Gia tri TAI DIA CHI ma con tro 'a' tro toi (*a): " << *a << endl;*/
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    int* a = new int[n]; 
    nhapMang(a, n);
    xuatMang(a, n);
    TongMang(a, n);
    TichMang(a, n);      
    TongChanMang(a, n);  
    TongLeMang(a, n);   
    delete[] a;
    return 0;
}
