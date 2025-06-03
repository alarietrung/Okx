#include <iostream>
 using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*void nhapMaTran(int** a, int m, int n) {
     cout << "Nhap cac phan tu cua ma tran:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}

void inMaTran(int** a, int m, int n) {
    cout << "\nMa tran vua nhap:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}
*/
void nhapMaTranC2(int** a, int m, int n) {
     cout << "Nhap cac phan tu cua ma tran:\n";
    for (int i = 0; i < m; i++) {
       for (int j = 0; j < n; j++) {
            cout << "Phan tu [" << i << "][" << j << "] = ";
           cin >> *( *(a + i) + j); // dung con tr? d? nh?p?
        }
   }
 }

void inGiaTriVaDiaChi(int** a, int m, int n) {
    cout << "\nGia tri va dia chi cua cac phan tu:\n";
   for (int i = 0; i < m; i++) {
       for (int j = 0; j < n; j++) {
           cout << "a[" << i << "][" << j << "] = " << *( *(a + i) + j);
           cout << " tai dia chi: " << (void*)( *(a + i) + j) << endl;
      }
  }
 }
void  tinhTongMaTran(int** a, int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum += *(*(a + i) + j); 
        }
    }
    cout<<"Tong Ma Tran la: "<<sum<<endl;
}
void  tinhTichMaTran(int** a, int m, int n) {
    int tich = 1;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            tich *= *(*(a + i) + j); 
        }
    }
    cout<<"Tich Ma Tran la: "<<tich<<endl;
}
void tinhTongTungDong(int** a, int m, int n) {
    cout << "\nTong cac phan tu tren tung dong:\n";
    for (int i = 0; i < m; i++) {
        int sumtungdong = 0; 
        for (int j = 0; j < n; j++) {
            sumtungdong += *(*(a + i) + j);
        }
        cout << "Tong dong " << i << " la: " << sumtungdong<< endl;
    }
}
void timGiaTriMaxTungDong(int** a, int m, int n) {
    cout << "\nGia tri lon nhat tren tung dong:\n";
    for (int i = 0; i < m; i++) { 
        int gt = *(*(a + i) + 0); 
        for (int j = 1; j < n; j++) { 
            if (*(*(a + i) + j) > gt) {
                gt = *(*(a + i) + j); 
            }
        }
        cout << "Gia tri lon nhat dong " << i << " la: " << gt << endl;
    }
}

int main(int argc, char** argv) {
	
	int m, n;
    cout << "Nhap so dong m: ";
    cin >> m;
    cout << "Nhap so cot n: ";
    cin >> n;

    
    int** a = new int*[m];
    for (int i = 0; i < m; ++i) {
        a[i] = new int[n];
    }

    nhapMaTranC2(a, m, n);
    inGiaTriVaDiaChi(a, m, n);
	tinhTongMaTran(a,m,n);
 	tinhTichMaTran(a,m,n);
 	tinhTongTungDong(a,m,n);
 	timGiaTriMaxTungDong(a,m,n);
 	
 	
    for (int i = 0; i < m; ++i) {
        delete[] a[i];
    }
    delete[] a;
	return 0;
}
