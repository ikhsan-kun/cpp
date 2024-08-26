/*
NAMA     : MOHAMMAD MAULANA IKHSAN
NIM      : 23040093
KELAS    : 2C
*/

#include <iostream>
using namespace std;

int main(){
    int dat, n, mx, mn, t;
    float r;
    string jwb;
    do{
        cout<<"MASUKKAN DATA : ";
        cin>>dat;
        for (int i=1; i<=dat;i++){
        cout<<"MASUKKAN NILAI KE-"<<i<<" ";cin>>n;
        t=t+n;
        if (i==1){
            mx=n;
            mn=n;
        }
        if (n>mx){
            mx=n;
        }
        if (n<mn){
            mn=n;
        } 
        }
    r=t/dat;
    cout<<"TOTAL NILAI         : "<<t<<endl;
    cout<<"RATA-RATA NILAI     : "<<r<<endl;
    cout<<"NILAI TERTINGGI     : "<<mx<<endl;
    cout<<"NILAI TERENDAH      : "<<mn<<endl;
    cout<<"APAKAH ANDA INGIN MENGULANG [Y/T] ";cin>>jwb;
    }while(jwb=="Y");


    return 0;
}