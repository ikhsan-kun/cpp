/*
NAMA     : MOHAMMAD MAULANA IKHSAN
KELAS    : 2C
NIM      : 23040093
*/
#include <iostream>
using namespace std;

string  c1, c2, c3; 

int vote=0, kd1=0, kd2=0, kd3=0, p;

int main (){
    cout<<"===============PEMILIHAN 3 CALON KETUA KELAS=============="<<endl<<endl;
    cout<<"MASUKKAN NAMA CALON!! "<<endl;
    cout<<"CALON 1\t\t\t:";cin>>c1;
    cout<<"CALON 2\t\t\t:";cin>>c2;
    cout<<"CALON 3\t\t\t:";cin>>c3;
    cout<<"JUMLAH PEMILIH\t\t:";cin>>vote;
    cout<<"=========================================================="<<endl;
    cout<<"MASUKKAN [1/2/3] UNTUK CALON YANG AKAN ANDA PILIH"<<endl<<endl;
    for(int a=1; a<=vote; a++){
        cout<<"MASUKKAN NOMER PILIHAN ANDA UNTUK PEMILIH NOMER "<<a<<" = ";cin>>p;
        if (p==1){
            kd1=kd1+1;
        }
        else if (p==2){
            kd2=kd2+1;
        }
        else if (p==3){
            kd3=kd3+1;
        }
        else {
            vote=vote+1;
        }
    }
    cout<<"=========================================================="<<endl;
    if (kd1==kd2 && kd1>kd3 && kd2>kd3){

        cout<<"\n\nADA PUTARAN KE-2 UNTUK CALON 1 & 2 !!"<<endl;
        for(int b=1; b<=vote; b++){
        cout<<"MASUKKAN NOMER PILIHAN ANDA UNTUK PEMILIH NOMER "<<b<<" = ";cin>>p;
        if (p==1){
            kd1=kd1+1;
        }
        else if (p==2){
            kd2=kd2+1;
        }
        else {
            vote=vote+1;}
        }
    }

    else if (kd1==kd3 && kd1>kd2 && kd3>kd2){
        cout<<"\n\nADA PUTARAN KE-2 UNTUK CALON 1 & 3 !!"<<endl;
        for(int b=1; b<=vote; b++){
        cout<<"MASUKKAN NOMER PILIHAN ANDA UNTUK PEMILIH NOMER "<<b<<" = ";cin>>p;
        if (p==1){
            kd1=kd1+1;
        }
        else if (p==3){
            kd3=kd3+1;
        }
        else {
            vote=vote+1;}
        
        }
    }
    else if(kd2>kd1 && kd3>kd1 && kd2==kd3){
        cout<<"\n\nADA PUTARAN KE-2 UNTUK CALON 2 & 3 !!"<<endl;
        for(int b=1; b<=vote; b++){
        cout<<"MASUKKAN NOMER PILIHAN ANDA UNTUK PEMILIH NOMER "<<b<<" = ";cin>>p;
        if (p==2){
            kd2=kd2+1;
        }
        else if (p==3){
            kd3=kd3+1;
        }
        else {
            vote=vote+1;}
        
        }
        
    }
    else {
            cout<<"\n\nTIDAK ADA PUTARAN KE 2!!"<<endl;
    }
    cout<<"=========================================================="<<endl;
    if (kd1>kd2) {if (kd1>kd3){ 
        cout<<"\n\nUNTUK PEMENANG PEMILIHAN CALON KETUA KELAS ADALAH : "<<c1<<" DENGAN PEROLEHAN SUARA SEBANYAK "<<kd1<<" SUARA ";}
        else 
        {cout<<"\n\nUNTUK PEMENANG PEMILIHAN CALON KETUA KELAS ADALAH : "<<c3<<" DENGAN PEROLEHAN SUARA SEBANYAK "<<kd3<<" SUARA ";}}
    else { if (kd2>kd3){
        cout<<"\n\nUNTUK PEMENANG PEMILIHAN CALON KETUA KELAS ADALAH : "<<c2<<" DENGAN PEROLEHAN SUARA SEBANYAK "<<kd2<<" SUARA ";} 
        else{
        cout<<"\n\nUNTUK PEMENANG PEMILIHAN CALON KETUA KELAS ADALAH : "<<c3<<" DENGAN PEROLEHAN SUARA SEBANYAK "<<kd3<<" SUARA ";}}

    




    
    return 0;
}




