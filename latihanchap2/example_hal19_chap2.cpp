/*
nama       : mohammad maulana ikhsan
kelas      : kelas2c
nim        : 23040093
*/
#include <iostream>
using namespace std;
int main()
{
int b1, b2, kcl;
cout<<"MENENTUKAN BILANGAN LEBIH KECIL\n";
cout<<"===============================\n";
cout<<"Masukkan Bilangan I : "; cin>>b1;
cout<<"Masukkan bilangan II : "; cin>>b2;
cout<<endl;
kcl = (b1<b2)? b1 : b2;
cout<<kcl<<" merupakan bilangan yang bernilai lebih kecil\n";
return 0;
}