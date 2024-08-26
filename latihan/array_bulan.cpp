#include <iostream>
using namespace std;

int main(){
    string bulan[]={"januari", "februari", "maret", "april", "mei", "juni", "juli", "agustus", "september", "oktober", "november", "desember"};
    int jml=sizeof(bulan)/sizeof(*bulan);

    for(int a; a<jml; a++){
        cout<<"NAMA BULAN KE-"<<a<<" : "<<bulan[a]<<endl;
    }
    
    return 0;
}