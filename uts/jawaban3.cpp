/*
NAMA     : MUHAMAD RIZAL MAULANA
NIM      : 23040074
KELAS    : 2C
*/
#include <iostream>
using namespace std;

float tot , jtot, diskon;
int kode, jmlh, hrga, izal, kembalian, jmlbrg,minuang, satuan;
string namabrg;

int main(){
    cout<<"===PROGRAM MEMASUKKAN JUMLAH BARANG DAN MEMBAYARNYA==="<<endl;
    cout<<"MASUKKAN NAMA BARANG             = ";getline(cin, namabrg);
    cout<<"MASUKKAN KODE BARANG             = ";cin>>kode;
    cout<<"MASUKKAN JUMLAH BARANG           = ";cin>>jmlh;
    cout<<"MASUKKAN SATUAN BARANG[KG]       = ";cin>>satuan;
    cout<<"MASUKKAN HARGA SATUAN BARANG     = ";cin>>hrga;
    tot=tot+(jmlh*hrga);
    if(tot>200000){
        diskon=tot*0.1;
    }
    cout<<"======================================================"<<endl;
    cout<<"TOTAL BELANJA            : RP."<<tot<<endl;
    cout<<"POTONGAN DISKON 10%      : RP."<<diskon<<endl;
    cout<<"======================================================"<<endl;
    jtot=tot-diskon;
    cout<<"TOTAL YANG HARUS DI BAYAR: Rp."<<jtot<<endl;
    cout<<"BAYAR                    : Rp.";cin>>izal;
    if (izal<jtot){
        cout<<"UANG YANG DI DIBAYARKAN KURANG TOLONG LUNASI PEMBAYARAN ANDA"<<endl;
        cout<<"BAYAR KEKURANGAN Rp ";cin>>minuang;
        minuang=minuang+izal;
        kembalian=minuang-jtot;
        cout<<"TERIMAKASIH SUDAH BERBELANJA : KEMBALIAN Rp."<<kembalian;

    } else {
        kembalian=izal-jtot;
        cout<<"TERIMAKASIH SUDAH BERBELANJA : KEMBALIAN RP."<<kembalian;
    }   
    
    return 0;
}