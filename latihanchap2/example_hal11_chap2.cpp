/*
nama      : mohammad maulana ikhsan
kelas     : kelas2c
nim       : 23040093
*/
#include <iostream>
using namespace std;
int main() {
int nil;
    cout<<"Masukkan Nilainya ";cin>>nil;
    if (nil>80) {cout<<"A";} else if (nil<=80 &&
    nil>65) {cout<<"B";} else if (nil<=65 && nil>59)
    {cout<<"C";} else {cout<<"D";}
return 0;
}