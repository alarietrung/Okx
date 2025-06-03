#include <iostream>
#include <math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    int m;
    cout<<"nhap vao money:";
    cin>>m;
    int soto500tram;
    int soto200tram;
    soto500tram=m/500000;
    soto200tram=m/200000;
    int sotienconlai=(m%500000)%200000;
    cout<<m<<" duoc doi sang cac to co menh gia 500000 va 200000"<<endl;
    cout<<" so to 500000:" <<soto500tram<<endl;
    cout<<"so to 200000:"<<soto200tram<<endl;
    cout<<"so tien chua doi con lai:"<<sotienconlai;
    return 0;
}
