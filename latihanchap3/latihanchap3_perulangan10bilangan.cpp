/*
NAMA      : MOHAMMMAD MAULANA IKHSAN
KELAS     : 2C
NIM       : 23040093
*/
#include <iostream>
using namespace std;

int bil, i, tot;
float rat;
int main(){
    cout<<"===PROGRAM UNTUK MENGHITUNG TOTAL DAN RATA RATA DARI 10 BILANGAN YANG DI MASUKKAN=="<<endl;
    for(i=1;i<=10;i++){
    cout<<"masukkan bilangan ke -"<<i<<" = ";cin>>bil;
    }
    tot=tot+bil;
    rat=tot/10;

    cout<<" TOTAL = "<<tot<<endl;
    cout<<" RATA RATA = "<<rat<<endl;

    return 0;
}