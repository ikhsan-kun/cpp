#include<iostream>
using namespace std;

int kls2c=0, nm, nn, tot;
double rat;
string nsm, nsn;

int main(){
    cout<<"MASUKKAN JUMLAH SISWA KELAS 2C : ";cin>>kls2c;
    
    int nim[kls2c];
    string nama[kls2c];
    int nilai[kls2c];
    for(int i=0; i<kls2c; i++){
        cout<<"==========================================="<<endl<<endl;
        cout<<"MASUKKAN NAMA  : ";cin>>nama[i];
        cout<<"MASUKKAN NIM   : ";cin>>nim[i];
        cout<<"MASUKKAN NILAI : ";cin>>nilai[i];
        cout<<"==========================================="<<endl<<endl;
        tot+= nilai[i];
        if(i==0){
            nm=nilai[i];
            nn=nilai[i];
            nsm=nama[i];
            nsn=nama[i];
        }
        if(nilai[i]>nm){
            nm=nilai[i];
            nsm=nama[i];
        }
        else if(nilai[i]<nn){
            nn=nilai[i];
            nsn=nama[i];
        }
    }
    cout<<"NILAI TERTINGGI ADALAH : "<<nsm<<" dengan nilai : "<<nm<<endl;
    cout<<"NILAI TERENDAH  ADALAH : "<<nsn<<" dengan nilai : "<<nn<<endl;
    rat=tot/kls2c;
    cout<<"TAMPILKAN RATA RATA : "<<rat;




    return 0;
}