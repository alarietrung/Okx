#include <iostream>
#define MAX 100
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void NhapMang(int a[MAX],int n){
	for(int i=0;i<n;i++){
		cout<<"Nhap vao phan tu a["<<i<<"]: ";
		cin>>a[i];
	}
}
void XuatMang(int a[MAX],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
}
int main(int argc, char** argv) {
	int n;
	int a[MAX];
	cout<<"Nhap vao so phan tu cua mang: ";
	cin>>n;
	NhapMang(a,n);
	XuatMang(a,n);
	return 0;
}
