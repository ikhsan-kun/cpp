/*
NAMA     : MOHAMMAD MAULANA IKHSAN
KELAS    : 2C
NIM      : 23040093
*/
#include <iostream>
using namespace std;

float tot;
int kode, jmlh, hrga, uang, kembalian, jmlbrg,minuang;
string namabrg;

int main(){
    cout<<"===PROGRAM MEMASUKKAN JUMLAH BARANG DAN MEMBAYARNYA==="<<endl;
    cout<<"masukkan jumlah barang = ";cin>>jmlbrg;
    for(int i=1; i<=jmlbrg; i++){
        cout<<"\nBARANG KE -"<<i<<endl<<endl;
        cout<<"MASUKKAN KODE BARANG          = ";cin>>kode;
        cout<<"MASUKKAN NAMA BARANG          = ";cin>>namabrg;
        cout<<"MASUKKAN JUMLAH BARANG        = ";cin>>jmlh;
        cout<<"MASUKKAN HARGA SATUAN BARANG  = ";cin>>hrga;
        tot=tot+(jmlh*hrga);
    }
    cout<<"TOTAL YANG HARUS DI BAYAR: Rp "<<tot<<endl;
    cout<<"BAYAR  Rp ";cin>>uang;
    if (uang<tot){
        cout<<"UANG YANG DI DIBAYARKAN KURANG TOLONG LUNASI PEMBAYARAN ANDA"<<endl;
        cout<<"BAYAR KEKURANGAN Rp ";cin>>minuang;
        minuang=minuang+uang;
        kembalian=minuang-tot;
        cout<<"TERIMAKASIH SUDAH BERBELANJA : KEMBALIAN Rp."<<kembalian;

    } else {
        kembalian=uang-tot;
        cout<<"TERIMAKASIH SUDAH BERBELANJA : KEMBALIAN Rp."<<kembalian;
    }   
    
    return 0;
}