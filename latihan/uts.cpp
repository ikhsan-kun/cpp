/*
NAMA     : MOHAMMAD MAULANA IKHSAN 
NIM      : 23040093
KELAS    : 2C
*/
#include<iostream>
using namespace std;

int faktorial(int x){
    if(x>1){
        return x * faktorial(x-1);
    }
    else{
        return 1;
    }
}
int y(int a, int b, int c, int d, int x){
return ((a + b)*(c - d)*faktorial(x));
}

int main(){
    int a, b, c, d, x, hasil1=0;
    cout<<"masukkan nilai a = ";cin>>a;
    cout<<"masukkan nilai b = ";cin>>b;
    cout<<"masukkan nilai c = ";cin>>c;
    cout<<"masukkan nilai d = ";cin>>d;
    cout<<"masukkan nilai e = ";cin>>x;
    hasil1=y(a, b, c, d, x);
    cout<<hasil1;
    


    return 0;
}