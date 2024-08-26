#include <iostream>
using namespace std;
  int main(){
    int jr;
    cout<<"MASUKKAN JUMLAH SISWA ";
    cin>>jr;
    string ar[jr];
    for (int a=0; a<jr ; a++){
        cout<<"MASUKKAN NAMA SISWA -"<<a<<" : ";
        cin>>ar[a];
    }
    for (int b=0; b<jr; b++){
      cout<<ar[b]<<endl;
    }
    return 0;

  }