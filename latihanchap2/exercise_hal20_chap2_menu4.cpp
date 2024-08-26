/*
NAMA      : MOHAMMAD MAULANA IKHSAN
KELAS     : 2C
NIM       : 23040093
*/

#include <iostream>
using namespace std;

int pil;

int main(){
    cout<<"====PROGRAM DENGAN 4 PILIHAN MENU===="<<endl<<endl;
    cout<<"MASUKKAN MENU DARI 1 - 4 = ";cin>>pil;

    if (pil==1){

        int sisa1, hasilBagi2, bilangan1, bilangan2;

        cout<<"Masukkan bilangan pertama: ";cin >>bilangan1;
        cout<<"Masukkan bilangan kedua: ";cin>>bilangan2;

        sisa1 = bilangan1 % 2;

        hasilBagi2 = bilangan2 / 3;

        cout<<"Sisa hasil bagi bilangan pertama dengan 2: "<< sisa1<< endl;
        cout<<"Hasil bagi bilangan kedua dengan 3: "<< hasilBagi2<< endl;
    } 
    else if (pil==2){

        int jml, pot, tot;

        cout<<"MASUKKAN TOTAL JUMLAH BELANJA UNTUK MENDAPATKAN DISKON"<<endl<<endl;
        cout<<"MASUKKAN TOTAL BELANJA ANDA = ";cin>>jml;

        if (jml>=100000)
        {pot=jml*0.3;} else {pot=jml*0.04;}
        tot=jml-pot;

        cout<<"SELAMAT ANDA MENDAPATKAN DISKON"<<endl;
        cout<<"JUMLAH BAYAR ANDA DI POTONG MENJADI "<<tot;
    }
    else if (pil==3){

        string nama, alamat;
        int nohp, nik, umur, prediksi;
        const int tahun=2024;

        cout<<"==MEMPREDIKSI TAHUN LAHIR=="<<endl<<endl;
        cout<<"NAMA         : ";cin>>nama;
        cout<<"ALAMAT       : ";cin>>alamat;
        cout<<"NIK          : ";cin>>nik;
        cout<<"NoHP         : ";cin>>nohp;
        cout<<"UMUR         : ";cin>>umur; 

        prediksi=tahun-umur;

        cout<<"KAMU LAHIR PADA TAHUN "<<prediksi;
    }
    else if (pil==4){
        cout<<"====PROGRAM SELESAI====";
    }
    else {cout<<"ANGKA YANG ANDA MASUKKAN SALAH";}


    return 0;
}