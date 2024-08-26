#include<iostream>
using namespace std;


int main(){
    int nilai[10];
    int golet;
    for (int a=0; a<10; a++){
        cout<<"MASUKKAN NILAI ARRAY : ";cin>>nilai[a];
    }
    cout<<"masukkan data yang dicari : ";cin>>golet;
    for (int b; b<10; b++){
        if(golet==nilai[b]){
            cout<<"nilai "<<golet<<"ada pada index ke "<<b<<endl;
        }
        else{
            cout<<"data yang dicari tidak ada";
        }
    }
    return 0;
}