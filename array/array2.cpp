/*
NAMA      : MOHAMMAD MAULANA IKHSAN
KELAS     : 2C
NIM       : 23040093
*/
#include <iostream>
using namespace std;

void tampil();
void cari();
void mengisi();
void ubahdata();

int nim[5];
string nama[5];
int nilai1[5];
int nilai2[5];
int nilai3[5];
int nilai4[5];
int nilai5[5];

int main(){
    int input;
    do{
        cout<<"======MENU====="<<endl;
        cout<<"1. INPUT DATA  "<<endl;
        cout<<"2. TAMPIL DATA  "<<endl;
        cout<<"3. CARI DATA   "<<endl;
        cout<<"4. UBAH DATA   "<<endl;
        cout<<"5. EXIT   "<<endl;
        cout<<"==============="<<endl;
        cout<<"masukkan pilihan menu : ";cin>>input;
        if (input==1){
            mengisi();
        }
           
            else if(input==2){
                cout<<"==========================================================================="<<endl;
                cout<<"|   NIM   |       NAMA       | NILAI1 | NILAI2 | NILAI3 | NILAI4 | NILAI 5|"<<endl;
                cout<<"==========================================================================="<<endl;
                tampil();
            } 
                else if(input==3){
                    cari();
                }
                    else if(input==4){
                        ubahdata();
                    }
                        else if(input==5){ 
                            cout<<"EXIT "<<endl;
                        }
                            else {
                                cout<<"pilihan yang anda masukkan salah"<<endl;
                            }

    }while(input!=5);
    
    return 0;
}
 
void tampil(){
    for(int x=0; x<5; x++){ ///untuk menampilkan dari index 0-4
    cout<<"|   "<<nim[x]<<"  |\t"<<nama[x]<<"\t     |   "<<nilai1[x]<<"   |  "<<nilai2[x]<<"   |   "<<nilai3[x]<<"   |   "<<nilai4[x]<<"   |   "<<nilai5[x]<<"   |"<<endl;
    cout<<"==========================================================================="<<endl<<endl;
    }
}
void mengisi(){
    cout<<"==========================================================================="<<endl; 
    cout<<"                              MASUKKAN DATA                                "<<endl; ///untuk memasukkan data array
    cout<<"==========================================================================="<<endl; 
    for(int i=0; i<5; i++){
        cout<<"__________________________________________"<<endl;
        cout<<"MASUKKAN NIM           "<<" = ";cin>>nim[i];
        cout<<"MASUKKAN NAMA          "<<" = ";cin>>nama[i];
        cout<<"MASUKKAN NILAI1        "<<" = ";cin>>nilai1[i];
        cout<<"MASUKKAN NILAI2        "<<" = ";cin>>nilai2[i];
        cout<<"MASUKKAN NILAI3        "<<" = ";cin>>nilai3[i];
        cout<<"MASUKKAN NILAI4        "<<" = ";cin>>nilai4[i];
        cout<<"MASUKKAN NILAI5        "<<" = ";cin>>nilai5[i];
        cout<<"__________________________________________"<<endl;
    }
}

void cari(){
    int cari, stt=0;
    char jwb='y';
    do{ //mencari data dengan memasukkan nim menggunakan do while
    cout<<"CARI DATA DENGAN MEMASUKKAN NIM :";cin>>cari;
    for(int y=0; y<5; y++){
        if(nim[y]==cari){
        cout<<"==========================================================================="<<endl; 
        cout<<"|   "<<nim[y]<<"  |\t"<<nama[y]<<"\t     |   "<<nilai1[y]<<"   |  "<<nilai2[y]<<"   |   "<<nilai3[y]<<"   |   "<<nilai4[y]<<"   |   "<<nilai5[y]<<"   |"<<endl;  
        cout<<"==========================================================================="<<endl;
        stt+=1;     
        }
    }
    if(stt==0){
        cout<<"nim yang nada cari salah"<<endl;
    }
    cout<<"apakah anda ingin mengulang lagi? [y/t]";cin>>jwb;
    }while(jwb=='y' || jwb=='Y');
}

void ubahdata(){
    int cari;
    int n1, n2, n3, n4, n5, nm;
    string name, jawaban;
    char jawab;
    cout<<"==========================================================================="<<endl; 
    cout<<"                            MENGUBAH ISI TABEL                             "<<endl; //mengubah isi tabel dengan memasukkan no urut tabel -1 jadi index 
    do{
        cout<<"==========================================================================="<<endl;
        cout<<"cari menggunakan urutan baris [1-5]         : ";cin>>cari;
        cari-=1;
        if (cari<=5){
            cout<<"|   "<<nim[cari]<<"  |\t"<<nama[cari]<<"\t     |   "<<nilai1[cari]<<"   |  "<<nilai2[cari]<<"   |   "<<nilai3[cari]<<"   |   "<<nilai4[cari]<<"   |   "<<nilai5[cari]<<"   |"<<endl;   
        }
        else {
            cout<<"DATA TIDAK DI TEMUKAN"<<endl;
        }

        if(cari<=5){
            cout<<"apa anda ingin mengganti nama [y/t]         : ";cin>>jawab;
        if (jawab=='y' || jawab=='Y'){
            cout<<"NEW NAME = ";cin>>name;
            nama[cari]=name;
        }
        cout<<"apa yang ingin di ubah [nim/n1/n2/n3/n4/n5] or no : ";cin>>jawaban;
        if (jawaban=="nim"){
            cout<<"NEW NIM  = ";cin>>nm;
            nim[cari]=nm;
        }
        else if (jawaban=="n1"){
            cout<<"MENGGANTI NILAI1 = ";cin>>n1;
            nilai1[cari]=n1;
        }
        else if (jawaban=="n2"){
            cout<<"MENGGANTI NILAI12 = ";cin>>n2;
            nilai2[cari]=n2;
        }
        else if (jawaban=="n3"){
            cout<<"MENGGANTI NILAI3 = ";cin>>n3;
            nilai3[cari]=n3;
        }
        else if (jawaban=="n4"){
            cout<<"MENGGANTI NILAI4 = ";cin>>n4;
            nilai4[cari]=n4;
        }
        else if (jawaban=="n5"){
            cout<<"MENGGANTI NILAI5 = ";cin>>n5;
            nilai1[cari]=n5;
        }
        else{
            break;
        }
    cout<<"tadaaaa data anda sudah di ubah :) "<<endl;
    cout<<"==========================================================================="<<endl; 
    cout<<"|   "<<nim[cari]<<"  |\t"<<nama[cari]<<"\t     |   "<<nilai1[cari]<<"   |  "<<nilai2[cari]<<"   |   "<<nilai3[cari]<<"   |   "<<nilai4[cari]<<"   |   "<<nilai5[cari]<<"   |"<<endl;
    cout<<"==========================================================================="<<endl<<endl;
    }
    cout<<"apakah anda ingin mengulang lagi? [y/t] :";cin>>jawab;   
    }while(jawab=='y' || jawab=='Y');
}
