/*
NAMA      : MOHAMMAD MAULANA IKHSAN
KELAS     : 2C
NIM       : 23040093
*/
#include<iostream>
using namespace std;
int pangkat(int x,int z){
    int hasil1=1;
    if(z<=1){
        return x; 
    }
    else{
        for( int a=0; a<z;a++){
        hasil1*=x ;
    }
    return hasil1; 
    }
}
int pangkat1(int k,int l){
    int hasil1=1;
    if(l<=1){
        return k; 
    }
    else{
        for( int a=0; a<l+2;a++){
        hasil1*=k ;
    }
    return hasil1; 
    }
}
int faktorial(int r){
 if (r > 1){
 return r * faktorial(r - 1);
 }else{ return 1; }
}
int main(){
    int n;
    int a, b, c, hasil=0, w;
    cout<<"menghitung persamaan matematika"<<endl;
    cout<<"masukkan nilai a = ";cin>>a;
    cout<<"masukkan nilai b = ";cin>>b;
    cout<<"masukkan nilai c = ";cin>>c;
    cout<<"masukkan nilai n = ";cin>>n;
    w=faktorial(n);
    hasil=(pangkat(a, n)+pangkat(b, w))-pangkat1(c, n);
    cout<<hasil;



    return 0;
}