/*#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Hàm Nhap 

//câu 1 
/*
void nhapMang2C(int **&a, int &m, int &n) {
    cout << "Nhap cac phan tu cho mang:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}
// Ham Xuat 
void xuatMang2C(int **a, int m, int n) {
    cout << "Mang da nhap:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}
void tinhTongTungCot(int** a, int m, int n) {
    cout << "\nTong cac phan tu tren tung cot:\n";
    for (int j = 0; j < n; j++) { 
        int sumtungcot = 0;      
        for (int i = 0; i < m; i++) { 
            sumtungcot += *(*(a + i) + j); 
        }
        cout << "Tong cot " << j << " la: " << sumtungcot <<endl;
    }
}

int main(int argc, char** argv) {
	int m,n; 
	cout << "Nhap so dong (m): ";
    cin >> m;
    cout << "Nhap so cot (n): ";
    cin >> n;

    
   int** a = new int*[m];
    for (int i = 0; i < m; ++i) {
        a[i] = new int[n];
    }
    
    nhapMang2C(a,m,n);
	xuatMang2C(a,m,n); 
    tinhTongTungCot(a,n,m);
    
	for (int i = 0; i < m; ++i) {
        delete[] a[i];
    }
    delete[] a;
	return 0;
}
*/
// câu 2

/*#include <iostream>

using namespace std;

// a) Hàm de quy 
int dequy(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n % 2 == 0) {
        return n + dequy(n - 2);
    } else {
        return dequy(n - 1);
    }
}

// b) Hàm khu de quy 
int khudequy(int n) {
    int sum = 0;
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    cout << "Nhap so nguyên N: ";
    cin >> n;

    if (n < 1) {
        cout << "N phai là so nguyên duong." << endl;
        return 1;
    }

    cout << "\n--- So dung de quy ---" << endl;
    int sumR = dequy(n);
    cout << "Tong các so chan tu 1 den " << n << " là: " << sumR << endl;

    cout << "\n--- So dung khu de quy (lap) ---" << endl;
    int sumI = khudequy(n);
    cout << "Tong các so chan tu 1 den " << n << " là: " << sumI << endl;
    
    return 0;
}
*/

// câu 3
 
/*#include <iostream>
#include <algorithm>

using namespace std;

int BinarySearch(const int arr[], int n, int x) {
    if (n <= 0) return -1;
    int left = 0;
    int right = n - 1;
    int mid;

    for (;left <= right;) {
        mid = left + (right - left) / 2;

        if (arr[mid] == x) {
            return mid;
        }
        if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;

    if (n <= 0) {
        cout << "So luong phan tu phai la so duong." << endl;
        return 1;
    }

    int* arr = new int[n];

    cout << "Nhap cac phan tu cua mang (cach nhau boi dau cach hoac Enter):" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Phan tu thu " << i + 1 << ": ";
        cin >> arr[i];
    }

    sort(arr, arr + n);

    cout << "\nMang sau khi da sap xep:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int x;
    cout << "\nNhap phan tu x can tim kiem: ";
    cin >> x;

    int index = BinarySearch(arr, n, x);

    if (index != -1) {
        cout << "Tim thay phan tu " << x << " tai chi so " << index << " trong mang da sap xep." << endl;
    } else {
        cout << "Khong tim thay phan tu " << x << " trong mang." << endl;
    }

    delete[] arr;
    return 0;
}
*/

// câu 4

/*#include <iostream>

// S? d?ng không gian tên std ð? vi?t code ng?n g?n hõn
using namespace std;

// a) 
void swap(int *a, int *b) {
    int temp = *a; 
    *a = *b;       
    *b = temp;    
}

// b) 
void InterchangeSort(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {        
        for (int j = i + 1; j < n; j++) {    
            if (arr[i] > arr[j]) {           
                swap(&arr[i], &arr[j]);      
            }
        }
    }
}

// c) 
void xuatsapxep(int *arr, int n) {
    cout << "Mang sau khi sap xep tang dan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;

    if (n <= 0) {
        cout << "So luong phan tu phai la so nguyen duong." << endl;
        return 1; 
    }

    int *arr = new int[n];

    cout << "Nhap cac phan tu cua mang:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    cout << "Mang truoc khi sap xep: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    InterchangeSort(arr, n);
    xuatsapxep(arr, n);

    delete[] arr;
    return 0; 
} */
// câu 5
#include <iostream>
#include <fstream>
#include <vector> 
void InterchangeSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                // Hoán v? a[i] và a[j]
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
// Khai báo hàm xuatsapxep (Xu?t m?ng ð? s?p x?p)
void xuatsapxep(int a[], int n) {
    std::cout << "\nDay so sau khi sap xep:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}
// a) Vi?t hàm nh?p d?y n s? nguyên. Lýu d?y trên vào t?p tin DULIEUDETHI2.TXT theo c?u trúc:
void ghifileDL() {
    int n;
    std::cout << "Nhap so luong phan tu (n): ";
    std::cin >> n;

    if (n <= 0) {
        std::cerr << "So luong phan tu phai la so nguyen duong." << std::endl;
        return;
    }
    std::ofstream outfile("DULIEUDETHI2.TXT", std::ios::binary | std::ios::out);

    if (!outfile) {
        std::cerr << "Loi: Khong the mo file DULIEUDETHI2.TXT de ghi." << std::endl;
        return;
    }
    outfile.write(reinterpret_cast<const char*>(&n), sizeof(n));

    int number;
    std::cout << "Nhap " << n << " so nguyen:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "Phan tu thu " << i + 1 << ": ";
        std::cin >> number;
        outfile.write(reinterpret_cast<const char*>(&number), sizeof(number));
    }
    outfile.close();
    std::cout << "Da ghi du lieu vao file DULIEUDETHI2.TXT thanh cong." << std::endl;
}

// b) Vi?t hàm docfileDL_SX_ghifile theo c?u trúc:
void docfileDL_SX_ghifile() {
    std::ifstream infile("DULIEUDETHI2.TXT", std::ios::binary | std::ios::in);
    if (!infile) {
        std::cerr << "Loi: Khong the mo file DULIEUDETHI2.TXT de doc." << std::endl;
        return;
    }

    int n;
    infile.read(reinterpret_cast<char*>(&n), sizeof(n));
    if (infile.gcount() != sizeof(n) || n <= 0) {
        std::cerr << "Loi: Khong the doc so luong phan tu tu file hoac so luong khong hop le." << std::endl;
        infile.close();
        return;
    }

    int* a = new (std::nothrow) int[n]; // C?p phát ð?ng m?ng a
    if (!a) {
        std::cerr << "Loi: Khong the cap phat bo nho cho mang a." << std::endl;
        infile.close();
        return;
    }

    for (int i = 0; i < n; ++i) {
        if (!infile.read(reinterpret_cast<char*>(&a[i]), sizeof(int))) {
            std::cerr << "Loi: Doc du lieu tu file khong thanh cong tai phan tu thu " << i + 1 << "." << std::endl;
            delete[] a;
            infile.close();
            return;
        }
    }
    infile.close();
    std::cout << "Da doc du lieu tu file DULIEUDETHI2.TXT thanh cong." << std::endl;
    InterchangeSort(a, n);
    std::cout << "Da sap xep mang bang InterchangeSort." << std::endl;
    std::ofstream outfile_sorted("DETHI2_SAPXEPIS.TXT", std::ios::out);
    if (!outfile_sorted) {
        std::cerr << "Loi: Khong the mo file DETHI2_SAPXEPIS.TXT de ghi ket qua." << std::endl;
        delete[] a;
        return;
    }
    for (int i = 0; i < n; ++i) {
        outfile_sorted << a[i] << " "; 
    }
    outfile_sorted << std::endl; 

    outfile_sorted.close();
    std::cout << "Da ghi day so da sap xep vao file DETHI2_SAPXEPIS.TXT." << std::endl;

    xuatsapxep(a, n);

    delete[] a;
}

int main() {
    std::cout << "--- CHUONG TRINH GHI FILE ---" << std::endl;
    ghifileDL();
    std::cout << "\n--------------------------------\n" << std::endl;
    std::cout << "--- CHUONG TRINH DOC FILE, SAP XEP VA GHI FILE KET QUA ---" << std::endl;
    docfileDL_SX_ghifile();

    return 0;
}

 
