/*
nama   : mohammad maulana ikhsan
kelas  : kelas 2c
nim    : 23040093
*/
#include<iostream>
using namespace std;

struct kelas2c{
    string nim;
    string nama;
    int nilaiuts;
    int nilaiuas;
};

kelas2c nilai[100];

int pil, c, in=0;


void inputdata();
void tampil();
void cari();
void ubahdata();
void sorting();
kelas2c* bubble(kelas2c nilai[], int on);
kelas2c* selection(kelas2c nilai[], int y);
kelas2c* shell(kelas2c nilai[], int b);
kelas2c* insertionsort(kelas2c nilai[], int e);
void merge(kelas2c nilai[], int kiri, int kanan, int tengah);
kelas2c* mergesort(kelas2c nilai[], int kiri, int kanan);



int main(){
    do{
    cout<<"\n\n================"<<endl;
    cout<<"      MENU      "<<endl;
    cout<<"================"<<endl;
    cout<<"1. INPUT DATA   "<<endl;
    cout<<"2. TAMPIL       "<<endl;
    cout<<"3. CARI DATA    "<<endl;
    cout<<"4. UBAH DATA    "<<endl;
    cout<<"5. SORTING DATA "<<endl;
    cout<<"6. EXIT         "<<endl;
    cout<<"================"<<endl;
 
    cout<<"\nMASUKKAN PILIHAN MENU : ";cin>>pil;

    switch(pil){
        case 1:{ 
            inputdata();
            break;
            }
        case 2:{
            tampil();
            break;
            }
        case 3:{
            cari();
            break;
            }
        case 4:{
            ubahdata();
            break;
            }
        case 5:{
            sorting();
            break;
            }
        case 6:{
            cout<<"\nEXIT TO PROGRAM"<<endl;
            break;
            }
        default:{
        cout<<"\nmenu yang anda pilih salah"<<endl;}
        }
    }while(pil!=6);

    return 0;
}






void inputdata(){ 
    char jwb;
    do{
        cout<<"____________________________________"<<endl;
        cout<<"data mahasiswa ke-"<<in+1<<endl;
        cout<<"masukkan nim       : ";cin>>nilai[in].nim;
        cout<<"masukkan nama      : ";cin>>nilai[in].nama;
        cout<<"masukkan nilai uts : ";cin>>nilai[in].nilaiuts;
        cout<<"masukkan nilai uas : ";cin>>nilai[in].nilaiuas;
        cout<<"____________________________________"<<endl;
        cout<<"apakah anda ingin menambahkan data lagi? [y/t] : ";cin>>jwb;
        in++;
    }while(jwb=='y' || jwb=='Y');
}



void tampil(){
    cout<<"===================================================="<<endl;
    cout<<"|   NIM   |       NAMA       | NILAIUTS | NILAIUAS |"<<endl;
    cout<<"===================================================="<<endl;
    for(int x=0; x<in; x++){
        cout<<"|   "<<nilai[x].nim<<"  |\t"<<nilai[x].nama<<"\t     |   "<<" "<<nilai[x].nilaiuts<<" "<<"   |    "<<nilai[x].nilaiuas<<"    |"<<endl; 
    }
    cout<<"===================================================="<<endl;
}

void cari(){
    int stt=0;
    string cari;
    while(stt==0){
        cout<<"\ncari data berdasarkan nim : ";cin>>cari;

        for(int y=0; y<in; y++){
            if(cari==nilai[y].nim){
                cout<<"\n\n\n DATA YANG DI CARI DENGAN MENGGUNAKAN NIM : "<<nilai[y].nim<<endl;
                cout<<"===================================================="<<endl;
                cout<<"|   NIM   |       NAMA       | NILAIUTS | NILAIUAS |"<<endl;
                cout<<"===================================================="<<endl;
                cout<<"|   "<<nilai[y].nim<<"  |\t"<<nilai[y].nama<<"\t     |   "<<" "<<nilai[y].nilaiuts<<" "<<"   |    "<<nilai[y].nilaiuas<<"    |"<<endl;
                cout<<"===================================================="<<endl;
                stt=1;
            }
        }
        if(stt==0){
            cout<<"\nnim yang anda cari tidak di temukan "<<endl;
        }
    }
}

void ubahdata(){
    int st=0, check=0;
    char jwb, t;
    string tanya;
    do{
        cout<<"\n\n             DATA YANG BISA DI UBAH                 "<<endl;
        tampil();
        while(st==0){
        cout<<"\n\ncari data yang ingin di ubah dengan memasukkan nim : ";cin>>tanya;
            for(int y=0; y<in; y++){
                if(tanya==nilai[y].nim){
                    cout<<"\n===================================================="<<endl;
                    cout<<"|   NIM   |       NAMA       | NILAIUTS | NILAIUAS |"<<endl;
                    cout<<"===================================================="<<endl;
                    cout<<"|   "<<nilai[y].nim<<"  |\t"<<nilai[y].nama<<"\t     |   "<<" "<<nilai[y].nilaiuts<<" "<<"   |    "<<nilai[y].nilaiuas<<"    |"<<endl;
                    cout<<"===================================================="<<endl;
                    st=1;
                    check=y;
                }
            }
        if(st==0)cout<<"\nnim yang anda cari tidak ada!! cari dengan benar!"<<endl;
        }
        cout<<"\n\n=================="<<endl;
        cout<<"  MENU UBAH DATA  "<<endl;
        cout<<"=================="<<endl;
        cout<<"1. ubah nim     "<<endl;
        cout<<"2. ubah nama     "<<endl;
        cout<<"3. ubah nilai uts      "<<endl;
        cout<<"4. ubah nilai uas      "<<endl;
        cout<<"=================="<<endl;
        int n3, n4, p=0;
        string n1, n2; 
        do{
            cout<<"\npilih menu :    ";cin>>p;
            if(p==1){
                cout<<"\nmasukkan nim baru : ";cin>>n1;
                nilai[check].nim=n1;
            }
                else if(p==2){
                    cout<<"\nmasukkan nama baru : ";cin>>n2;
                    nilai[check].nama=n2;
                }
                    else if(p==3){
                        cout<<"\nmasukkan nilai uts baru : ";cin>>n3;
                        nilai[check].nilaiuts=n3;
                    }
                        else if(pil==4){
                            cout<<"\nmasukkan nilai uas baru : ";cin>>n4;
                            nilai[check].nilaiuas=n4;
                        }
                            else{
                                cout<<"\nmenu yang anda masukkan salah!"<<endl;
                            }
        cout<<"\napakah anda ingin mengubah data lagi? [y/t] : ";cin>>jwb;
        }while(jwb=='y' || jwb=='Y');

        cout<<"\n               DATA SETELAH DIUBAH                 "<<endl;
        for(int y=0; y<in; y++){
            if(nilai[check].nim==nilai[y].nim){
                cout<<"===================================================="<<endl;
                cout<<"|   NIM   |       NAMA       | NILAIUTS | NILAIUAS |"<<endl;
                cout<<"===================================================="<<endl;
                cout<<"|   "<<nilai[check].nim<<"  |\t"<<nilai[check].nama<<"\t     |   "<<" "<<nilai[check].nilaiuts<<" "<<"   |    "<<nilai[check].nilaiuas<<"    |"<<endl;
                cout<<"===================================================="<<endl; 
            }
        }
    cout<<"\nAPAKAH INGIN MENGUBAH DATA YANG LAIN? [y/t] : ";cin>>t;
    st=0;
    }while(t=='y' || t=='Y');
    
}

void sorting(){
    do{
            cout<<"\n\n================"   <<endl;
            cout<<"   MENU SORTING      "  <<endl;
            cout<<"================"       <<endl;
            cout<<"1. BUBBLE SORT   "      <<endl;
            cout<<"2. SELECTION SORT      "<<endl;
            cout<<"3. MERGE SORT    "      <<endl;
            cout<<"4. SHELL SORT    "      <<endl;
            cout<<"4. INSERTION SORT    "      <<endl;
            cout<<"5. EXIT   "             <<endl;
            cout<<"================"       <<endl;
            cout<<"\n\nMASUKKAN PILIHAN MENU : ";cin>>c;
            if(c>=1 && c<=5){
                cout<<"\n=====================SORTING DATA==================="<<endl;
                cout<<"====================== DATA AWAL ==================="<<endl;
                tampil();
            }
            if(c==1){
                bubble(nilai, in);
            }
                else if(c==2){
                    selection(nilai, in);
                }
                    else if(c==3){
                        mergesort(nilai, 0, in-1);
                    }
                        else if(c==4){
                            shell(nilai, in);
                        }
                            else if(c==5){
                                insertionsort(nilai, in);
                            }
                                else if(c==6){
                                    cout<<"EXIT"<<endl;
                                }
            if(c>=1 && c<=5){
                cout<<"================DATA SETELAH DI SORTING============="<<endl;
                tampil();
            }
        }while(c!=6);
}

///sorting

kelas2c* bubble(kelas2c nilai[], int in){

    int temp2, temp3;
    string temp, temp1;

    for(int i = 1; i < in; i++) {
        for(int j = 0; j < in-i; j++){
            
            if(nilai[j].nim > nilai[j+1].nim){

            temp = nilai[j].nim;
            nilai[j].nim = nilai[j+1].nim;
            nilai[j+1].nim = temp;

            temp1 = nilai[j].nama;
            nilai[j].nama = nilai[j+1].nama;
            nilai[j+1].nama = temp1;

            temp2 = nilai[j].nilaiuts;
            nilai[j].nilaiuts = nilai[j+1].nilaiuts;
            nilai[j+1].nilaiuts = temp2;

            temp3 = nilai[j].nilaiuas;
            nilai[j].nilaiuas = nilai[j+1].nilaiuas;
            nilai[j+1].nilaiuas = temp3;
            }
        }
    }
   return nilai;
}

kelas2c* selection(kelas2c nilai[], int y){
    int kcl, temp2, temp3;
    string  temp, temp1;

    for(int x = 0; x < y - 1; x++){
        kcl = x;
        for(int i = x ; i < y; i++){
            if(nilai[i].nim < nilai[kcl].nim){
                kcl = i;
            }
        }
        temp = nilai[x].nim;
        nilai[x].nim = nilai[kcl].nim;
        nilai[kcl].nim = temp;

        temp1 = nilai[x].nama;
        nilai[x].nama = nilai[kcl].nama;
        nilai[kcl].nama = temp1;

        temp2 = nilai[x].nilaiuts;
        nilai[x].nilaiuts = nilai[kcl].nilaiuts;
        nilai[kcl].nilaiuts = temp2;

        temp3 = nilai[x].nilaiuas;
        nilai[x].nilaiuas = nilai[kcl].nilaiuas;
        nilai[kcl].nilaiuas = temp3;
    }
    return nilai;
}

kelas2c* insertionsort(kelas2c nilai[], int e){
    for (int i=0; i<e; i++){
        for (int j=0; j<=i; j++){
            if (nilai[i].nim < nilai[j].nim){
    
                string temp = nilai[i].nim;
                nilai[i].nim = nilai[j].nim;
                nilai[j].nim = temp;

                string temp1 = nilai[i].nama;
                nilai[i].nama = nilai[j].nama;
                nilai[j].nama = temp1;

                int temp2 = nilai[i].nilaiuts;
                nilai[i].nilaiuts = nilai[j].nilaiuts;
                nilai[j].nilaiuts = temp2;

                int temp3 = nilai[i].nilaiuas;
                nilai[i].nilaiuas = nilai[j].nilaiuas;
                nilai[j].nilaiuas = temp3;
            }
        }
    }
    return nilai;
}

kelas2c* shell(kelas2c nilai[], int b){
    for (int jarak = b / 2; jarak > 0; jarak /= 2){
        for (int i = jarak; i < b ; i += 1){
            string temp = nilai[i].nim;
            string temp1 = nilai[i].nama;
            int temp2 = nilai[i].nilaiuts;
            int temp3 = nilai[i].nilaiuas;
            int j;
                for (j = i; j >= jarak && nilai[j - jarak].nim > temp; j -= jarak){
                    nilai[j].nim = nilai[j - jarak].nim;
                    nilai[j].nama = nilai[j - jarak].nama;
                    nilai[j].nilaiuts = nilai[j - jarak].nilaiuts;
                    nilai[j].nilaiuas = nilai[j - jarak].nilaiuas;
                }
            nilai[j].nim = temp;
            nilai[j].nama = temp1;
            nilai[j].nilaiuts = temp2;
            nilai[j].nilaiuas = temp3;
        }
    }
    return nilai;
}

void merge(kelas2c nilai[], int kiri, int kanan, int tengah) {
    int n1 = tengah - kiri + 1;
    int n2 = kanan - tengah;

    string nim1[n1], nim2[n2];
    string nama1[n1], nama2[n2];
    int ts1[n1], ts2[n2];
    int as1[n1], as2[n2];

    for (int i = 0; i < n1; i++) {
        nim1[i] = nilai[kiri + i].nim;
        nama1[i] = nilai[kiri + i].nama;
        ts1[i] = nilai[kiri + i].nilaiuts;
        as1[i] = nilai[kiri + i].nilaiuas;
    }
    for (int y = 0; y < n2; y++) {
        nim2[y] = nilai[tengah + 1 + y].nim;
        nama2[y] = nilai[tengah + 1 + y].nama;
        ts2[y] = nilai[tengah + 1 + y].nilaiuts;
        as2[y] = nilai[tengah + 1 + y].nilaiuas;
    }

    int i = 0, y = 0, k = kiri;

    while (i < n1 && y < n2) {
        if (nim1[i] <= nim2[y]) {
            nilai[k].nim = nim1[i];
            nilai[k].nama = nama1[i];
            nilai[k].nilaiuts = ts1[i];
            nilai[k].nilaiuas = as1[i];
            i++;
        } else {
            nilai[k].nim = nim2[y];
            nilai[k].nama = nama2[y];
            nilai[k].nilaiuts = ts2[y];
            nilai[k].nilaiuas = as2[y];
            y++;
        }
        k++;
    }

    while (i < n1) {
        nilai[k].nim = nim1[i];
        nilai[k].nama = nama1[i];
        nilai[k].nilaiuts = ts1[i];
        nilai[k].nilaiuas = as1[i];
        i++;
        k++;
    }

    while (y < n2) {
        nilai[k].nim = nim2[y];
        nilai[k].nama = nama2[y];
        nilai[k].nilaiuts = ts2[y];
        nilai[k].nilaiuas = as2[y];
        y++;
        k++;
    }
}

kelas2c* mergesort(kelas2c nilai[], int kiri, int kanan) {
    if (kiri < kanan) {
        int tengah = kiri + (kanan - kiri) / 2;

        mergesort(nilai, kiri, tengah);
        mergesort(nilai, tengah + 1, kanan);

        merge(nilai, kiri, kanan, tengah);
    }
    return nilai;
}
