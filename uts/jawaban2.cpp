/*
NAMA     : MUHAMAD RIZAL MAULANA
NIM      : 23040074
KELAS    : 2C
*/
#include<iostream>
using namespace std;

int main(){
    float izal=0, rat;
    int alas, tinggi, jwb;
    cout<<"============================================================================"<<endl;
    cout<<"PROGRAM UNTUK MENAMPILKAN TOTAL DAN RATA2 DARI SEJUMLAH LUAS SEGITIGA SIKU2"<<endl;
    cout<<"============================================================================"<<endl;
    cout<<"MASUKKAN JUMLAH SEGITIGA SIKU-SIKU YANG INGIN DI HITIUNG = ";cin>>jwb;
    for(int i=1; i<=jwb; i++){
        cout<<"\n\n==MENGHITUNG LUAS SEGITIGA SIKU-SIKU=="<<endl;
        cout<<"masukkan alas   : ";cin>>alas; 
        cout<<"masukkan tinggi : ";cin>>tinggi;
        izal+=(0.5*alas*tinggi);
    }
    rat=izal/jwb;
    cout<<"TOTAL       = "<<izal<<endl;
    cout<<"RATA-RATA   = "<<rat<<endl;
    return 0;
}