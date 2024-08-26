/*
Nama :Muhamad wisnu solekhfudin
nim :23040073
Kelas :2c*/

#include <iostream>
using namespace std;

int kode,jml;
string nama;
float hrgs,tothrg,byr,kurang,kembali;

int main(){
   cout<<"==============================================\n";
   cout<<" TRANSAKSI PENJUALAN BARANG\n";
   cout<<"==============================================\n";
   cout<<"KODE BARANG\t:";cin>>kode;
   cout<<"NAMA BARANG\t:";cin>>nama;
   cout<<"MASUKAN JUMLAH\t:";cin>>jml;
   cout<<"HARGA SATUANNYA\t:";cin>>hrgs;
   tothrg=jml*hrgs;
   cout<<"==============================================\n";
   cout<<"JUMLAH YANG HARUS DI BAYAR :Rp."<<tothrg<<endl;

   do {
    int in, on;
      cout<<"\nMasukkan Jumlah Uangnya    :Rp.";cin>>byr; 
      if (byr<tothrg) {
          kurang=tothrg-byr;
          cout<<"\nAnda Kurang bayar Rp. "<<kurang<<",- lagi.\n";
          cout<<"Silahkan isikan Jumlah Uangnya lagi !!\n";
          cout<<"\nMasukkan Jumlah Uangnya    :Rp.";cin>>in;
          byr=byr+in; 
      }
      else if (byr>=tothrg) { 
              on=byr-tothrg;
              cout<<"==============================================\n";
              cout<<"KEMBALIAN ANDA Rp."<<on<<"\nSEMOGA HARIMU SEENIN TERUS:D\n";
            }
             else cout<<"Terima Kasih telah berbelanja\n";
   } while (byr<tothrg);

return 0;
}