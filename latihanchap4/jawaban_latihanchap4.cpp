/*
NAMA      : MOHAMMAD MAULANA IKHSAN
KELAS     : 2C
NIM       : 23040093
*/
#include<iostream>
using namespace std;

void lingkaran(){
    int r;
    double tot;
    cout<<"MASUKKAN JARI2 ";cin>>r;
    tot=3.14*r*r;
    cout<<"LUAS NYA ADALAH "<<tot;
}
void persegi(){
    int k, p, l;
    cout<<"MASUKKAN PANJANG = ";cin>>p;
    cout<<"MASUKKAN LEBAR   = ";cin>>l;
    k=2*(p+l);
    cout<<"TOTAL LUASNYA ADALAH "<<k;
}
void segitigasiku2(){
    int a, t, al;
    cout<<"MASUKKAN TINGGI = ";cin>>t;
    cout<<"MASUKKAN ALAS   = ";cin>>al;
    a=0.5*t*al;
    cout<<"TOTAL LUASNYA ADALAH "<<a;
}

int main(){
    int menu;

    do{
        cout<<"\n\nPILIHAN MENU [1/2/3] 4. EXIT "<<endl;
        cout<<"MASUKKAN MENU KE-";cin>>menu;
        if (menu==1){
            lingkaran();
        }
        else if(menu==2){
            persegi();
        }
        else if(menu==3){
            segitigasiku2();
        }
        else if(menu>4){
            cout<<"ANGKA YANG ANDA MASUKKAN DI LUAR JANGKAUAN"<<endl;
        }


    }while(menu!=4);


    return 0;
}