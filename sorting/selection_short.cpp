#include <iostream>
using namespace std;

int main(){
    int data[]={8, 9, 5, 4, 1, 3, 2, 6, 7, 10,23,11,34,21,14,17,77,65,38,22,89};
    int r = sizeof(data) / sizeof(*data);///untuk mengetahui jumlah/value dari array
    int kcl, temp;

    for(int x = 0; x < r - 1; x++){
        kcl = x;
        for(int i = x ; i < r; i++){
            if(data[i] < data[kcl]){
                kcl = i;
            }
        }
            temp = data[x];///8
            data[x] = data[kcl];///1
            data[kcl] = temp;//8

        cout<<"Setelah di sorting "<<x+1<<" kali:"<<endl;
        for(int a = 0; a < r; a++){
            cout<< data[a] << " ";
        }
        cout<<endl;
    }

    return 0;
}
