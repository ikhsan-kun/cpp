/*
NAMA     : MOHAMMAD MAULANA IKHSAN 
KELAS    : 2C
NIM      : 23040093
*/
#include <iostream>
using namespace std;

int main()
{
    string nama, alamat, kota;
    int nim, nohp, umur, tahun;
    
    
    cout<<"===MENAMPILKAN DATA DIRI DAN PREDIKSI TAHUN LAHIR==="<<endl<<endl;
    cout<<"NAMA         :";cin>>nama;
    cout<<"NIM          :";cin>>nim;
    cout<<"UMUR         :";cin>>umur;
    cout<<"ALAMAT       :";cin>>alamat;
    cout<<"NO HP        :";cin>>nohp;
    tahun=2024-umur;
    
    cout<<"PREDIKSI TAHUN LAHIR ADALAH = Tahun "<<tahun;
    
    

    return 0;
}