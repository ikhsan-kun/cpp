
#include <iostream>
using namespace std;

int faktorial(int n){
 if (n > 1){
 return n * faktorial(n - 1);
 }else{ return 1; }
}
int main(){
 int i, jml;
 cout<<"Menampilkan Jumlah Faktorial dari Sebuah Bilangan\n";
 cout<<"=================================================\n\n";
 cout<<"Masukkan Bilangan Bulat Positif = ";cin >> i;
 jml = faktorial(i);
 cout<<"Jumlah faktorial dari " << i << " adalah = " << jml<<endl<<endl;
 return 0;}