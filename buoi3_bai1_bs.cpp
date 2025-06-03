#include <iostream>
#define MAX 100
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Hàm nh?p m?ng
void NhapMang(int a[MAX],int n){
	for(int i=0;i<n;i++){
		cout<<"Nhap vao phan tu a["<<i<<"]: ";
		cin>>a[i];
	}
}
// Hàm xu?t m?ng
void XuatMang(int a[MAX],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
	cout<<endl;
}
//các bài toàn tính trên m?ng 1 chi?u có n phan tu

// Hàm tính tong mang
void TinhTongMang(int a[MAX], int n) {
    int tong = 0; 
    for (int i = 0; i < n; i++) {
        tong += a[i]; 
    }
    cout<<"S(" << n << ")=" << tong<< endl;
}
//ham tính tich mang
void TinhTichMang(int a[MAX], int n) {
    if (n <= 0) {
        cout << "Khong the tinh tich cua mang rong hoac khong co phan tu." << endl;
        return;
    }
    int tich = 1; 
    for (int i = 0; i < n; i++) {
        tich *= a[i];
    }
    cout << "P(" << n << ")=" << tich<< endl;
}
int HamTongMang(int a[MAX], int n) {
    int tong = 0; 
    for (int i = 0; i < n; i++) {
        tong += a[i]; 
    }
    return tong;
}
int HamTichMang(int a[MAX], int n) {
    if (n <= 0) {
        cout << "Khong the tinh tich cua mang rong hoac khong co phan tu." << endl;
        return 0;
    }
    int tich = 1; 
    for (int i = 0; i < n; i++) {
        tich *= a[i];
    }
    return tich;
}

// Hàm tr? v? t?ng các s? l? trong m?ng
int HamTongSoLe(int a[MAX], int n) {
    if (n <= 0) return 0;
    int tongLe = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 1) { 
            tongLe = tongLe + a[i];
        }
    }
    return tongLe;
}

// Hàm tr? v? t?ng các s? ch?n trong m?ng
int HamTongSoChan(int a[MAX], int n) {
    if (n <= 0) return 0; 
    int tongChan = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            tongChan += a[i];
        }
    }
    return tongChan;
}
// Hàm t?m giá tr? l?n nh?t trong m?ng
int TimMax(int a[MAX], int n) {
    int maxValue = a[0]; 
    for (int i = 1; i < n; i++) {
        if (a[i] > maxValue) {
            maxValue = a[i]; 
        }
    }
    return maxValue;
}
// Hàm t?m giá tr? nh? nh?t trong m?ng
int TimMin(int a[MAX], int n) {
    int minValue = a[0]; 
    for (int i = 1; i < n; i++) {
        if (a[i] < minValue) {
            minValue = a[i]; 
        }
    }
    return minValue;
}
bool TestX(int a[MAX], int n, int x) {
    bool isfound = false; 
    for (int i = 0; i < n; i++) {
        if (a[i] ==x) {
            isfound=true; 
        }
    }
    return isfound;
}
void outputmap(int a[MAX], int n, int x) {
if (TestX(a, n, x) == true) {
        cout << "--- Ket qua tim kiem gia tri " << x << " ---" << endl;
        for (int i = 0; i < n; i++) {
            if (a[i] == x) {
                cout << "gia tri " << a[i] << " tai vi tri so " << i << endl;
            }
        }
    } else { 
        cout << "Khong tim thay gia tri " << x << " trong mang." << endl;
    }
}
bool KiemTraChan(int a[MAX], int n){
	bool isfound = false;
	for(int i=0;i<n;i++){
		if(a[i]%2==0)
			isfound=true; 
	}
	return isfound; 
}
void XuatSoChan(int a[MAX],int n){
	if(KiemTraChan(a,n) == true){ 
		cout<<"Cac so chan trong mang la: "<<endl;
		for(int i=0; i<n; i++){
			if(a[i]%2 == 0){
			cout << "pt có so chan " << a[i] << "" <<endl;
			}
		}
		cout<<endl;
	} else {
		cout<<"Khong co so chan nao trong mang."<<endl;
	}
}
bool MangTang(int a[MAX], int n){
		for(int i=0;i<n-1;i++){
			if(a[i]>a[i+1]){
				return false;
			}
		}
			return true;
	}
bool MangGiam(int a[MAX], int n) {
   		 for (int i = 0; i < n - 1; i++) {
        	if (a[i] < a[i + 1]) {
         	   return false;
        }
    }
    return true;
}
void PhanLoaiMang(int a[MAX], int n) {
    cout << "\n--- Phan loai tinh chat cua mang ---" << endl;
    if (MangTang(a,n)==false && MangGiam(a,n)==false) {
    	cout << "Mang KHONG TANG, KHONG GIAM (mang lon xon)." << endl;
    } else if (MangTang(a,n)==false && MangGiam(a,n)==true) {
        cout << "Mang GIAM DAN (hoac cac phan tu bang nhau, khong tang)." << endl;
    } else if (MangTang(a,n)==true && MangGiam(a,n)==false) {
        cout << "Mang TANG DAN (hoac cac phan tu bang nhau, khong giam)." << endl;
    } 
}
// Hàm chính 
int main(int argc, char** argv) {
	int n;
	int a[MAX];
	cout<<"Nhap vao so phan tu cua mang: ";
	cin>>n;
	NhapMang(a,n);
	XuatMang(a,n);
	//Cách goi thu tuc void
	TinhTongMang(a,n);
	cout << "---------------------------------" << endl;
	TinhTichMang(a,n);
	cout << "---------------------------------" << endl;
	//goi ham co chu return 
	int s= HamTongMang(a,n);
	cout << "---------------------------------" << endl;
	cout<<"S(" << n << ")=" <<s<< endl;
	int p= HamTichMang(a,n);
	cout << "---------------------------------" << endl;
	cout << "P(" << n << ")=" <<p<< endl;
	int sLe = HamTongSoLe(a, n);
	cout << "---------------------------------" << endl;
  cout << "S_le(" << n << ")=" << sLe << endl;
  int sChan = HamTongSoChan(a, n);
  cout << "---------------------------------" << endl;
  cout << "S_chan(" << n << ")=" << sChan << endl;
  int giaTriMax = TimMax(a, n);
  cout << "---------------------------------" << endl;
  cout << "Phan tu lon nhat trong mang la: " << giaTriMax << endl;
  int giaTriMin = TimMin(a, n);
  cout << "---------------------------------" << endl;
 cout << "Phan tu nho nhat trong mang la: " << giaTriMin << endl;
	int x;
	cout<< "Nhap gia tri can tim: ";
	cin>>x;
	 if(TestX(a,n,x)==true){
    	cout<< x << " have in array"<<endl;
    }else {
    	cout<< x << " don't have in array"<<endl;
}
	outputmap(a,n,x);
	cout << "---------------------------------" << endl;
	KiemTraChan(a,n);
	XuatSoChan(a,n);
	cout << "---------------------------------" << endl;
	PhanLoaiMang(a,n);
	return 0;
}
