#include <iostream>
using namespace std;

struct nilai2_c{
    int nim;
    char nama[25];
    int nilai_uts;
    int nilia_uas;
}; 


int main(){
    int x=0;
    int in;
    cout<<"masukkan jumlah data = ";cin>>in;
    nilai2_c nilai[in];



    do{
        cout<<"================================================"<<endl;
        cout<<"MASUKKAN NAMA       ";cin>>nilai[x].nama;
        cout<<"MASUKKAN nim   ";cin>>nilai[x].nim;
        cout<<"MASUKKAn nilai uts   ";cin>>nilai[x].nilai_uts;
        cout<<"MASUKKAN nilai uas ";cin>>nilai[x].nilia_uas;
        cout<<"================================================"<<endl;
        x++;
    }while(x<in);
        cout<<"NAMA\t"<<"tanggal\t"<<"jumlah pinjam\t"<<"jatuh tempo";

    return 0;
}