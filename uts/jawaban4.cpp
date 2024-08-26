/*
NAMA     : MUHAMAD RIZAL MAULANA
NIM      : 23040074
KELAS    : 2C
*/
#include<iostream>
using namespace std;
double izal(int a, int b){
    int hasil=1.0;
    for (int i=0; i<b; i++){
       hasil*=a;
    }
    return hasil;
}
int y(int a, int b, int c, int d){
    return ((a + b)*(c - d));
}

int main(){
    int a, b, c, d, x, hasil1=0, hasil2;
    cout<<"masukkan nilai a = ";cin>>a;
    cout<<"masukkan nilai b = ";cin>>b;
    cout<<"masukkan nilai c = ";cin>>c;
    cout<<"masukkan nilai d = ";cin>>d;
    cout<<"masukkan nilai e = ";cin>>x;
    hasil1=y(a, b, c, d);
    hasil2=izal(hasil1, x);
    cout<<hasil2;
    


    return 0;
}