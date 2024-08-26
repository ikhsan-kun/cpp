#include <iostream>
using namespace std;

int main(){
    int data[]={3, 4, 1, 2, 9,5 , 10};
    int temp;
    int r = sizeof(data)/sizeof(*data);
    cout<<"=====SORTING DATA====="<<endl;
    cout<<"=====  DATA AWAL ====="<<endl;
    for(int j=0; j<r; j++){
        cout<<data[j]<<" ";
    }
    for(int i = 1; i < r; i++) {
        for(int j = 0; j < r-i; j++){
            if(data[j] >  data[j+1]) {
                temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }
    cout<<"\nHASIL SORTING"<<endl;
    for(int x=0; x<r; x++){
        cout<<data[x]<<" ";
    }
    return 0;
}
