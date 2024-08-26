/*
NAMA     : MOHAMMAD MAULANA IKHSAN
KELAS    : 2C 
NIM 23040093
*/
#include <iostream>
using namespace std;


int
main ()
{
  int tahun, bulan;

  cout <<
	"MENENTUKAN JUMLAH HARI PADA BULAN TERTENTU DENGAN MEMEASUKKAN TAHUN DAN BULAN"
	<< endl << endl;
  cout << "MASUKKAN TAHUN EMPAT DIGIT  =  ";
  cin >> tahun;
  cout << "MASUKKAN BULAN DENGAN ANGKA =  ";
  cin >> bulan;
  cout<<"JUMLAH HARI PADA TAHUN "<<tahun<<" DAN BULAN KE -"<<bulan<<" adalah = ";
  if (tahun % 4 == 0 && bulan == 2)
	{
	  cout << "29";
	}
  else if (tahun % 4 == 0 || bulan == 1)
	{
	  cout << "31";
	}
  else if (tahun % 4 == 0 || bulan == 2)
	{
	  cout << "28";
	}
  else if (tahun % 4 == 0 || bulan == 3)
	{
	  cout << "31";
	}
  else if (tahun % 4 == 0 || bulan == 4)
	{
	  cout << "30";
	}
  else if (tahun % 4 == 0 || bulan == 5)
	{
	  cout << "31";
	}
  else if (tahun % 4 == 0 || bulan == 6)
	{
	  cout << "30";
	}
  else if (tahun % 4 == 0 || bulan == 7)
	{
	  cout << "31";
	}
  else if (tahun % 4 == 0 || bulan == 8)
	{
	  cout << "31";
	}
  else if (tahun % 4 == 0 || bulan == 9)
	{
	  cout << "30";
	}
  else if (tahun % 4 == 0 || bulan == 10)
	{
	  cout << "31";
	}
  else if (tahun % 4 == 0 || bulan == 11)
	{
	  cout << "30";
	}
  else if (tahun % 4 == 0 || bulan == 12)
	{
	  cout << "31";
	}
  else if
  (bulan>12)
	{
	  cout << "BULAN ATAU TAHUN TIDAK VALID";
	}





  return 0;
}
