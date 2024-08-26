#include <iostream>
using namespace std;
int Jumlah(int var1, int var2)
{
 int Jumlah;
 Jumlah = var1 + var2;
 return Jumlah;
}
int main()
{
 int x, y, total;
 cout<<"Masukkan Bilangan Pertama = ";cin>>x;
 cout<<"Masukkan Bilangan Kedua = ";cin>>y;
 total=Jumlah(Jumlah(x,y),Jumlah(x,y))*Jumlah(x, y);
 cout<<"Jumlah nya adalah = "<<total;
 return 0;
}
