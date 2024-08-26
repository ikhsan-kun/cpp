/*

NAMA        : MOHAMMAD MAULANA IKHSAN
NIM         : 23040093
KELAS       : 2C*/
#include <iostream>
using namespace std;

int main()
{
    int ntgs, nujn, nkhdr, nakhr;
    cout<<"MASUKKAN NILAI TUGAS     (1 - 30) =";cin>>ntgs;
    cout<<"MASUKKAN NILAI UJIAN     (1 - 50) =";cin>>nujn;
    cout<<"MASUKKAN NILIA KEHADIRAN (1 - 20) =";cin>>nkhdr;
    nakhr=ntgs+nujn+nkhdr;
    cout<<"maka nilai akhir nya adalah = ";
    if (ntgs < 1 || ntgs >30 || nujn < 1 || nujn >50 || nkhdr < 1 || nkhdr >20)
    {cout<<"nilai yang di masukkan tidak sesuai";}
    if (nakhr>=80){cout<<"A";} else if (nakhr >=66 && nakhr <=79){cout<<"B";} else {cout<<"C";}
    
    return 0;
}