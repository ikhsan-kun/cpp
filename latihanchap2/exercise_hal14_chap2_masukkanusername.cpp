/*

NAMA        : MOHAMMAD MAULANA IKHSAN
NIM         : 23040093
KELAS       : 2C*/
#include <iostream>
using namespace std;

int main()
{
     string username, password;
     
    cout << "Masukkan username: ";
    cin >> username;
    cout << "Masukkan password: ";
    cin >> password;

    
    if (username == "ADMIN" && password == "12345") {
        cout << "Username dan password benar." << endl;
    } else if (username == "ADMIN" && password != "12345") {
        cout << "Username benar, password salah." << endl;
    } else if (username != "ADMIN" && password == "12345") {
        cout << "Username salah, password benar." << endl;
    } else {
        cout << "Username dan password salah." << endl;
    }

    
    
    return 0;
}