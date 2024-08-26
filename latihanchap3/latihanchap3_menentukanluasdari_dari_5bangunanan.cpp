/*
NAMA      : MOHAMMMAD MAULANA IKHSAN
KELAS     : 2C
NIM       : 23040093
*/


#include <iostream>
using namespace std;


int tot, luas, panjang, lebar;
float rat;

int main(){
    cout<<"====MENENTUKAN TOTAL DARI LUAS RUANGAN DAN RATA RATA DARI 5 RUANGAN DENGAN MEMASUKKAN PANJANG DAN LEBAR===="<<endl;
    for(int i=1; i<=5; i++){
        cout<<"RUANGAN KE -"<<i<<endl;
        cout<<"MASUKKAN PANJANG   = ";cin>>panjang;
        cout<<"MASUKKAN LEBAR     = ";cin>>lebar;
        tot=tot+panjang+lebar;
    }
    rat=tot/5;
    cout<<"LUAS TOTAL DARI 5 RUANGAN = "<<tot<<endl;
    cout<<"RATA RATA NYA ADALAH = "<<rat<<endl;
    return 0;
}