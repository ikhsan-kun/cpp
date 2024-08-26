/*
nama    : mohammad maulana ikhsan
nim     : 23040093
kelas   : kelas2c
*/
#include <iostream>
using namespace std;
int main() {
int a, b, c;
    cout<<"Masukkan bil ke-1, ke-2, dan ke-3";cin>>a;cin>>b;cin>>c;
    if (a>b) {if (a>c) {cout<<a;} else {cout<<c;}}
    else {if (b>c) {cout<<b;} else {cout<<c;}}
return 0;
}