/*
NAMA        : MOHAMMAD MAULANA IKHSAN
KELAS       : 2C
NIM         : 23040093
*/


#include <iostream>
using namespace std;

int hari, bulan, weton;


int main (){
    cout<<"=====MASUKKAN ANGKA UNTUK MENENTUKAN HARI MENGGUNAKAN SWITCH-CASE====="<<endl;
    cout<<"HARI KE -";cin>>hari;
    
    switch(hari){
         case 1:
         cout<<"AHAD"<<endl;
         break;
         case 2:
         cout<<"SENIN"<<endl;
         break;
         case 3:
         cout<<"SELASA"<<endl;
         break;
         case 4:
         cout<<"RABU"<<endl;
         break;
         case 5:
         cout<<"KAMIS"<<endl;
         break;
         case 6:
         cout<<"JUM'AT"<<endl;
         break;
         case 7:
         cout<<"SABTU"<<endl;
         break;
         default:
         cout<<"ANGKA YANG ANDA MASUKKAN TIDAK DI KETAHUI MOHON MASUKKAN ANGKA DARI 1-7 UNTUK NAMA HARI";
}
    cout<<"\n\n=====MENENTUKAN NAMA NAMA BULAN DENGAN MEMASUKKAN ANGKA MENGGUNAKAN SWITCH-CASE====="<<endl;
    cout<<"BULAN KE -";cin>>bulan;

    switch(bulan){
        case 1: cout<<"JANUARI"<<endl;
        break;
        case 2: cout<<"FEBRUARI"<<endl;
        break;
        case 3: cout<<"MARET"<<endl;
        break;
        case 4: cout<<"APRIL"<<endl;
        break;
        case 5: cout<<"MEI"<<endl;
        break;
        case 6: cout<<"JUNI"<<endl;
        break;
        case 7: cout<<"JULI"<<endl;
        break;
        case 8: cout<<"AGUSTUS"<<endl;
        break;
        case 9: cout<<"SEPTEMBER"<<endl;
        break;
        case 10: cout<<"OKTOBER"<<endl;
        break;
        case 11: cout<<"NOVEMBER"<<endl;
        break;
        case 12: cout<<"DESEMBER"<<endl;
        break;
        default:
        cout<<"MOHON MASUKKAN ANGKA DARI 1 - 12 SESUAI JUMLAH BULAN"<<endl;
    }

    cout<<"\n\n=====MENENTUKKAN NAMA WETON DENGAN MEMAASUKKAN ANGKA MENGGUNAKAN SWITCH CASE====="<<endl;
    cout<<"WETON KE -";cin>>weton;

    switch(weton){
        case 1: cout<<"PAHING"<<endl;
        break;
        case 2: cout<<"PON"<<endl;
        break;
        case 3: cout<<"WAGE"<<endl;
        break;
        case 4: cout<<"KLIWON"<<endl;
        break;
        case 5: cout<<"LEGI"<<endl;
        break;
        default:
        cout<<"MASUKKAN ANGKA 1-5 UNTUK MENENTUKKAN NAMA WETON";
    }   
    return 0;
}