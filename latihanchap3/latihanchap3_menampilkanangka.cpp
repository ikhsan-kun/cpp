/*
NAMA      : MOHAMMAAD MAULANA IKHSAN
KELAS     : 2C
NIM       : 23040093
*/
#include <iostream>
using namespace std;



int main()
{
    cout<<"====PROGRAM MENAMPILKAN BIL===="<<endl<<endl;
    for(int a=1; a<=4; ++a){
        for(int b=1; b<=a; ++b)
        {
        cout<<"1";
        }
        cout<<endl;
    }
    for(int a=1; a<=4; ++a){
        for(int b=1; b<=a; ++b)
        {
        cout<<b;
        }
        cout<<endl;
    }
    for(int a=4; a>=1; --a){
        for(int b=1; b<=a; ++b)
        {
        cout<<"1";
        }
        cout<<endl;
    }
    for(int a=4; a>=1; --a){
        for(int b=1; b<=a; ++b)
        {
        cout<<b;
        }
        cout<<endl;
    }
    for (int a=4; a>=1; --a){
        for (int b=a; b>=1; --b)
        {
        cout<<b;
        }
        cout << endl;
    }
    
    return 0;
}