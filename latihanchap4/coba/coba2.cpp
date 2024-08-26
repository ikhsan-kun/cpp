/*
NAMA      : MOHAMMAD MAULANA IKHSAN
KELAS     : 2C
NIM       : 23040093
*/
#include<iostream>
using namespace std;

void harber(int i);

int main(){
    int j;
    cout<<"masukkan jumlahnya ";cin>>j;harber(j);
    return 0;
}
void harber(int i){
    string x;
    for(int a=1; a<=i; a++){
        cout<<a<<". MASUKAN NAMA : ";cin>>x;
    }
}