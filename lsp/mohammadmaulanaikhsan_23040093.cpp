/*
NAMA       : MOHAMMAD MAULANA IKHSAN
KELAS      : 2C
NIM        : 23040093
*/
#include <iostream>
using namespace std;


string namap, almtp, nmatj, almttj, kota;
float kg, harga, tot, ppn, jtot;  
int kotj, kodtj, byr, kbl; 

int main (){
    cout<<"     EKSPEDISI JASA PENGIRIMAN BARANG     "<<endl;
    cout<<"                 IKHSAN                   "<<endl;
    cout<<"=========================================="<<endl;
    cout<<"NAMA PENGIRIM\t\t\t: ";getline(cin, namap);//memasukkan nama pengirim
    cout<<"ALAMAT PENGIRIM\t\t\t: ";cin>>almtp;//memasukkan alamat pengirim
    cout<<"NAMA TUJUAN\t\t\t: ";cin>>nmatj;//memasukkan alamat penerima
    cout<<"ALAMAT TUJUAN\t\t\t: ";cin>>almttj;//memasukkan alamat tujuan penerima
    cout<<"BERAT (KG)\t\t\t: ";cin>>kg;//memasukkan berat
    cout<<"KODE TUJUAN [1/2/3/4]\t\t: ";cin>>kodtj;//memasukkan kode
    switch(kodtj)//perintah untuk menentukkan jika kode yang di masukkan [1/2/3/4]
    {
        case 1:
        kota = "JAKARTA";
        harga = 25000;
        break;
        case 2:
        kota = "YOGYAKARTA";
        harga = 23000;
        break;
        case 3:
        kota = "BANDUNG";
        harga = 21500;
        break;
        case 4:
        kota = "SURABAYA";
        harga = 28500;
        break;
        default:
        cout<<"PILIHAN HANYA [1/2/3/4] SAJA! "<<endl;
    }
    cout<<"KOTA TUJUAN\t\t\t: "<<kota<<endl<<endl;//akan menampilkkan sesuai nomer kode yang anda pilih
    cout<<"     EKSPEDISI JASA PENGIRIMAN BARANG     "<<endl;
    cout<<"                 IKHSAN                   "<<endl;
    cout<<"=========================================="<<endl;
    cout<<"NAMA PENGIRIM\t\t\t: "<<namap<<endl;//menampilkan nama pengirim
    cout<<"ALAMAT PENGIRIM\t\t\t: "<<almtp<<endl;//menampilkkan alamat pengirim
    cout<<"NAMA TUJUAN\t\t\t: "<<nmatj<<endl;//menampilkkan nama penerima
    cout<<"ALAMAT TUJUAN\t\t\t: "<<almttj<<endl;//menampilkkan alamat penerima
    cout<<"BERAT (KG)\t\t\t: "<<kg<<endl;//menampilkkan berat
    cout<<"KODE TUJUAN [1/2/3/4]\t\t: "<<kodtj<<endl;//menampillkan kode yang di masukkan
    cout<<"=========================================="<<endl;
    cout<<"HARGA PER (KG)\t\t\t: Rp."<<harga<<endl;//harga per kg di tentukkan saat memasukkan kode
    tot=harga*kg;//menghitung total harga per kg 
    ppn=tot*0.1;//menghitung pajak
    cout<<"TOTAL HARGA\t\t\t: Rp."<<tot<<endl;//menampilkkan total harga
    cout<<"PPN 10%\t\t\t\t: "<<ppn<<endl;//menampilkan hasil pajak
    cout<<"=========================================="<<endl;
    jtot=tot+ppn;//menghitung jumlah total harga + ppn
    cout<<"TOTAL \t\t\t\t: Rp."<<jtot<<endl;
    cout<<"BAYAR\t\t\t\t: Rp.";cin>>byr;//memasukkan jumlah bayar
    kbl=byr-jtot;//menghitung kembalian
    cout<<"KEMBALIAN\t\t\t: Rp."<<kbl<<endl;//menampilkkan kembalian

    


    










    return 0;
}
