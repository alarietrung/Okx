#include <iostream>
using namespace std;
#define MAX 100

void NhapMT(int a[MAX][MAX], int n, int m)
{
    cout << "Nhap vao ma tran 2 chieu:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}
void XuatMT(int a[MAX][MAX], int n, int m)
{
    cout << "Xuat ma Tran vua nhap :\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
// Hàm tính và trả về các phần tử ma trận (int)
int TongMTHam(int a[MAX][MAX], int n, int m)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            s += a[i][j];
        }
    }
    return s;
}
int TichMTHam(int a[MAX][MAX], int n, int m)
{
    int tich = 1; // Sử dụng int
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            tich *= a[i][j];
        }
    }
    return tich;
}

// Hàm tính và in các phần tử ma trận (void)
void TongMT(int a[MAX][MAX], int n, int m)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            s += a[i][j];
        }
    }
    cout << "Tong cac phan tu ma tran: " << s << endl;
}
void TichMT(int a[MAX][MAX], int n, int m)
{
    int tich = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            tich *= a[i][j];
        }
    }
}
void TongChan(int a[MAX][MAX], int n, int m)
{
    int s_chan = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] % 2 == 0)
            {
                s_chan += a[i][j];
            }
        }
    }
    cout << "Tong cac phan tu chan trong ma tran : " << s_chan << endl;
}
void Tongle(int a[MAX][MAX], int n, int m)
{
    int s_le = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] % 2 != 0)
            {
                s_le += a[i][j];
            }
        }
    }
    cout << "Tong cac phan tu le trong ma tran : " << s_le << endl;
}
// Hàm in các số chẵn và các số lẻ trong ma trận
void XuatSoChanMaTran(int a[MAX][MAX], int n, int m)
{
    cout << "Cac phan tu chan trong ma tran: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] % 2 == 0)
            {
                cout << "[" << i << "][" << j << "]=" << a[i][j] << "  ";
            }
        }
    }
    cout << endl;
}
void XuatSoLeMaTran(int a[MAX][MAX], int n, int m)
{
    cout << "Cac phan tu le trong ma tran: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] % 2 != 0)
            {
                cout << "[" << i << "][" << j << "]=" << a[i][j] << "  ";
            }
        }
    }
    cout << endl;
}
// Hàm tìm phần tử lớn nhất trong ma trận
void TimMaxA(int a[MAX][MAX], int n, int m)
{
    int max = a[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }
    cout << "Phan tu lon nhat trong ma tran là " << max << endl;
}

// Hàm tìm phần tử nhỏ nhất trong ma trận
void TimMinA(int a[MAX][MAX], int n, int m)
{
    int min_val = a[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] < min_val)
            {
                min_val = a[i][j];
            }
        }
    }
    cout << "Phan tu nho nhat trong ma tran: " << min_val << endl;
}
void TimX(int a[MAX][MAX], int n, int m, int x)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == x)
            {
                cout << "Giá trị " << x << " nằm ở vị trí dòng số " << i << " cột số " << j << "\t" << endl;
            }
        }
    }
}
// Các hàm tính CheoChinh,CheoPhu,TamGiacVgTren,TamGiacVgDuoi
void TongCheoChinh(int a[MAX][MAX], int n, int m)
{
    int sum_diagonal = 0;
    for (int i = 0; i < min(n, m); i++)
    {
        sum_diagonal += a[i][i];
    }
    cout << "Tong cac phan tu tren duong cheo chinh: " << sum_diagonal << endl;
}

void TongCheoPhu(int a[MAX][MAX], int n, int m)
{
    int sum_anti_diagonal = 0;
    for (int i = 0; i < n; i++)
    {
        int j = (n - 1) - i; 
        if (j >= 0 && j < m)
        { 
            sum_anti_diagonal += a[i][j];
        }
    }
    cout << "Tong cac phan tu tren duong cheo phu: " << sum_anti_diagonal << endl;
}

void TongTamGiacTren(int a[MAX][MAX], int n, int m)
{
    if (n != m)
    {
        cout << "Khong the tinh tong tam giac tren cho ma tran khong vuong." << endl;
        return;
    }
    int sum_upper_triangle = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < m; j++)
        { 
            sum_upper_triangle += a[i][j];
        }
    }
    cout << "Tong cac phan tu trong tam giac tren: " << sum_upper_triangle << endl;
}

void TongTamGiacDuoi(int a[MAX][MAX], int n, int m)
{
    if (n != m)
    {
        cout << "Khong the tinh tong tam giac duoi cho ma tran khong vuong." << endl;
        return;
    }
    int sum_lower_triangle = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        { 
            sum_lower_triangle += a[i][j];
        }
    }
    cout << "Tong cac phan tu trong tam giac duoi: " << sum_lower_triangle << endl;
}
int main(int argc, char *argv[])
{
    int n, x, m;
    int a[MAX][MAX];
    cout << "Nhap so hang: ";
    cin >> n;
    cout << "Nhap so cot: ";
    cin >> m;

    NhapMT(a, n, m);
    XuatMT(a, n, m);
    // Gọi các hàm đã bổ sung
    /*    TongMT(a, n, m);
    cout << "Tong cac phan tu ma tran: " << TongMTHam(a, n, m) << endl;

    TichMT(a, n, m);
    cout << "Tich cac phan tu ma tran: " << TichMTHam(a, n, m) << endl; 

    TongChan(a, n, m);
    Tongle(a, n, m);
    XuatSoChanMaTran(a, n, m);
    XuatSoLeMaTran(a, n, m);
    TimMaxA(a, n, m);
    TimMinA(a, n, m); */
    cout << "Nhập giá trị cần tìm: ";
    cin >> x;
    TimX(a, n, m, x);
    TongCheoChinh(a, n, m);
    TongCheoPhu(a, n, m);
    TongTamGiacTren(a, n, m);
    TongTamGiacDuoi(a, n, m);
    return 0;
}