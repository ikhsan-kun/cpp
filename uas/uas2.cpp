/*
nama : m maulana ikhsan 
kelas : 2c
nim   : 23040093 
*/
#include<iostream>
using namespace std;

struct peminjaman{
    string notransaksi;
    string namapem;
    int nik;
    int harga;//harga sewa perhari
    int lamapinjam;//jumlah hari
    ///tanggal pinjam
    int hari;
    int bulan;
    int tahun;

    float total;
};

peminjaman mobil[75];

int pil, c, in=0, tot;


void inputdata();
void tampil();
void cari();
void ubahdata();
void sorting();
peminjaman* shell(peminjaman mobil[], int b);




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
            cout<<"sorting......."<<endl;
            shell(mobil, in);

            cout<<"\n\nsetelah di sorting"<<endl<<endl;
            tampil();
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
        cout<<"data ke-"<<in+1<<endl;
        cout<<"masukkan no transaksi              : ";cin>>mobil[in].notransaksi;
        cout<<"masukkan nama peminjam             : ";cin>>mobil[in].namapem;
        cout<<"masukkan nik peminjam              : ";cin>>mobil[in].nik;
        cout<<"masukkan harga sewa perhari        : ";cin>>mobil[in].harga;
        cout<<"masukkan jumlah hari pinjam        : ";cin>>mobil[in].lamapinjam;

        cout<<"\n\nmasukkan tanggal pinjam "<<endl;
        cout<<"masukkan hari                      : ";cin>>mobil[in].hari;
        cout<<"masukkan bulan                     : ";cin>>mobil[in].bulan;
        cout<<"masukkan tahun                     : ";cin>>mobil[in].tahun;
        cout<<mobil[in].hari<<"/"<<mobil[in].bulan<<"/"<<mobil[in].tahun<<endl;
        cout<<"____________________________________"<<endl;
        mobil[in].total = mobil[in].harga* mobil[in].lamapinjam;
        tot+=mobil[in].total;
        cout<<"apakah anda ingin menambahkan data lagi? [y/t] : ";cin>>jwb;
        in++;
    }while(jwb=='y' || jwb=='Y');
}



void tampil(){
        cout<<"======================================================================================================================="<<endl;
        cout<<"| NO TRANSAKASI  |  TANGGAL PINJAM   |    NAMA PEMINJAM    |   NIK PEMINJAM    |    JUMLAH HARI SEWA    |     HARGA SEWA     |    TOTAL     |"<<endl;
    for(int x=0; x<in; x++){
        cout<<"| "<<mobil[x].notransaksi<<"  |  "<<mobil[x].hari<<"/"<<mobil[x].bulan<<"/"<<mobil[x].tahun<<"  |   "<<mobil[x].namapem<<"  |  "<<mobil[x].nik<<"   |   "<<mobil[x].lamapinjam<<"   |   "<<mobil[x].harga<<"   |   "<<mobil[x].total<<"   |"<<endl;
    
    }
        cout<<"======================================================================================================================="<<endl;
        cout<<" AKUMULASI TOTAL TRANSAKSI                                            Rp."<<tot<<endl;
    
}


void cari(){
    bool stt = false;
    string cari;
    while(stt==false){
        cout<<"\ncari data berdasarkan no transaksi : ";cin>>cari;

        for(int y=0; y<in; y++){
            if(cari==mobil[y].notransaksi){
                cout<<"======================================================================================================================="<<endl;
                cout<<"| NO TRANSAKASI  |  TANGGAL PINJAM   |    NAMA PEMINJAM    |   NIK PEMINJAM    |    JUMLAH HARI SEWA    |     HARGA SEWA     |    TOTAL     |"<<endl;
                cout<<"| "<<mobil[y].notransaksi<<"  |  "<<mobil[y].hari<<"/"<<mobil[y].bulan<<"/"<<mobil[y].tahun<<"  |   "<<mobil[y].namapem<<"  |  "<<mobil[y].nik<<"   |   "<<mobil[y].lamapinjam<<"   |   "<<mobil[y].harga<<"   |   "<<mobil[y].total<<"   |"<<endl;
                stt=true;
            }
        }
        if(stt==false){
            cout<<"\ntransaksi yang anda cari tidak di temukan "<<endl;
        }
    }
}

void ubahdata(){
    int  check=0;
    char jwb, t;
    bool st=false;
    string tanya;
    do{
        while(st==false){
        cout<<"\n\ncari data yang ingin di ubah dengan memasukkan no transaksi : ";cin>>tanya;
            for(int y=0; y<in; y++){
                if(tanya==mobil[y].notransaksi){
                    cout<<"======================================================================================================================="<<endl;
                    cout<<"| NO TRANSAKASI  |  TANGGAL PINJAM   |    NAMA PEMINJAM    |   NIK PEMINJAM    |    JUMLAH HARI SEWA    |     HARGA SEWA     |    TOTAL     |"<<endl;
                    cout<<"| "<<mobil[y].notransaksi<<"  |  "<<mobil[y].hari<<"/"<<mobil[y].bulan<<"/"<<mobil[y].tahun<<"  |   "<<mobil[y].namapem<<"  |  "<<mobil[y].nik<<"   |   "<<mobil[y].lamapinjam<<"   |   "<<mobil[y].harga<<"   |   "<<mobil[y].total<<"   |"<<endl;
                    st=true;
                    check=y;
                }
            }
        if(st==false)cout<<"\ntransaksi yang anda cari tidak ada!! cari dengan benar!"<<endl;
        }
        cout<<"\n\n=================="<<endl;
        cout<<"  MENU UBAH DATA  "<<endl;
        cout<<"=================="<<endl;
        cout<<"1. ubah tanggal pinjam     "<<endl;
        cout<<"2. ubah nik peminjam     "<<endl;
        cout<<"3. ubah nama peminjam      "<<endl;
        cout<<"4. ubah harga sewa      "<<endl;
        cout<<"=================="<<endl;
        int n2, p=0, n3;
        string n4;
        int d, m, y;
        do{
            cout<<"\npilih menu :    ";cin>>p;
            if(p==1){
                cout<<"\nmasukkan hari baru : ";cin>>d;
                cout<<"masukkan bulan baru : ";cin>>m;
                cout<<"masukkan tahun baru : ";cin>>y;
                mobil[check].hari=d;
                mobil[check].bulan=m;
                mobil[check].tahun=y;
            }
                else if(p==2){
                    cout<<"\nmasukkan nik baru : ";cin>>n2;
                    mobil[check].nik=n2;
                }
                    else if(p==3){
                        cout<<"\nmasukkan nama peminjam baru : ";cin>>n4;
                        mobil[check].namapem=n4;
                    }
                        else if(pil==4){
                            cout<<"\nmasukkan harga sewa baru baru : ";cin>>n3;
                            mobil[check].harga=n3;
                        }
                            else{
                                cout<<"\nmenu yang anda masukkan salah!"<<endl;
                            }
        cout<<"\napakah anda ingin mengubah data lagi? [y/t] : ";cin>>jwb;
        }while(jwb=='y' || jwb=='Y');

    cout<<"\nAPAKAH INGIN MENGUBAH DATA YANG LAIN? [y/t] : ";cin>>t;
    st=0;
    }while(t=='y' || t=='Y');
    
}



///sorting



peminjaman* shell(peminjaman mobil[], int b){
    for (int jarak = b / 2; jarak > 0; jarak /= 2){
        for (int i = jarak; i < b ; i += 1){
            string temp = mobil[i].notransaksi;
            string temp1 = mobil[i].namapem;
            int temp2 = mobil[i].nik;
            int temp3 = mobil[i].harga;
            int temp4 = mobil[i].lamapinjam;
            int temp5 = mobil[i].hari;
            int temp6 = mobil[i].bulan;
            int temp7 = mobil[i].tahun;
            float temp8 = mobil[i].total;
            int j;
                for (j = i; j >= jarak && mobil[j - jarak].notransaksi > temp; j -= jarak){
                    mobil[j].notransaksi = mobil[j - jarak].notransaksi;
                    mobil[j].namapem = mobil[j - jarak].namapem;
                    mobil[j].nik = mobil[j - jarak].nik;
                    mobil[j].harga = mobil[j-jarak].harga;
                    mobil[j].lamapinjam = mobil[j - jarak].lamapinjam;
                    mobil[j].hari = mobil[j-jarak].hari;
                    mobil[j].bulan = mobil[j-jarak].bulan;
                    mobil[j].tahun = mobil[j-jarak].tahun;
                    mobil[j].total = mobil[j-jarak].total;
                }
            mobil[j].notransaksi = temp;
            mobil[j].namapem = temp1;
            mobil[j].nik = temp2;
            mobil[j].harga = temp3;
            mobil[j].lamapinjam = temp4;
            mobil[j].hari = temp5;
            mobil[j].bulan = temp6;
            mobil[j].tahun = temp7;
            mobil[j].total = temp8;
        }
    }
    return mobil;
}

