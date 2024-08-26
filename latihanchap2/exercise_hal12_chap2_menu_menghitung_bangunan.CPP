/*
NAMA     : MOHAMMAD MAULANA IKHSAN
KELAS    : 2C 
NIM 23040093
*/
#include <iostream>
using namespace std;


int
main ()
{
    int pil;
    cout<<"MEMBUAT PROGRAM DENGAN MEMASUKKAN PILIHAN ANGKA ANTARA 1, 2 DAN 3 "<<endl<<endl;
    cout<<"MASUKKAN ANGKA = ";cin>>pil;
    if (pil==1)
    {
        int r;
        float luas; 
        
        cout<<"==MENGHITUNG LUAS lingkaran=="<<endl;
        cout<<"masukkan jari-jari : ";cin>>r;
        luas=3.14*r*r;
        cout<<"luas lingkaran nya adalah = "<<luas;
        
    }
    else if (pil==2)
    {
        int alas, tinggi;
        float luas1;
        
        cout<<"==MENGHITUNG LUAS SEGITIGA SIKU-SIKU=="<<endl;
        cout<<"masukkan alas   : ";cin>>alas; 
        cout<<"masukkan tinggi : ";cin>>tinggi;
        luas1= 0.5*alas*tinggi;
        cout<<"luas segitiga siku-siku jika alas "<<alas<<" dan tinggi "<<tinggi<<" adalah "<<luas1;
    }
    else if (pil==3)
    {
        cout<<"PROGRAM TELAH SELESAI....THANK YOU :) ";
    }
    else if (pil>3)
    {
        cout<<" PILIHAN YANG ANDA MASUKKAN SALAH HARUS 1/2/3 ";
    }



  return 0;
}
