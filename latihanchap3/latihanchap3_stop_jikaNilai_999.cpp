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
    do{//for di dalam do, memasukkan sejumlah data untuk menghitung nilai
        cout<<"MASUKKAN DATA     : ";
        cin>>dat;
        for (int i=1; i<=dat;i++){
        cout<<"MASUKKAN NILAI KE-"<<i<<" ";cin>>n;
        t=t+n;
        if (i==1){//nilai awal untuk menentukan min/max
            mx=n;
            mn=n;
        }
        if (n>mx){//menentukan nilai tertinggi
            mx=n;
        }
        if (n<mn){//menentukan nilai terendah
            mn=n;
        } 
        }
    r=t/dat;
    cout<<"TOTAL NILAI         : "<<t<<endl;
    cout<<"RATA-RATA NILAI     : "<<r<<endl;
    cout<<"NILAI TERTINGGI     : "<<mx<<endl;
    cout<<"NILAI TERENDAH      : "<<mn<<endl;
    }while(t<999);//jka total nilai kurang dari 999 program akan mengulang, jika tidak program akan berhenti


    return 0;
}