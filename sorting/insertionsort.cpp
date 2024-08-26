#include<iostream>
using namespace std;


int main(){
    int m;
    int data[]={3, 4, 1, 2, 9,5 , 10};
    int n = sizeof(data)/sizeof(*data);

    cout<<"=====  DATA AWAL ====="<<endl;
    for(int j=0; j<n; j++){
        cout<<data[j]<<" ";
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<=i; j++){
            if (data[i]<data[j]){
                m=data[i];
                data[i]=data[j];
                data[j]=m;
            }
        }
    }
    cout<<"\nHASIL SORTING"<<endl;
    for(int x=0; x<n; x++){
        cout<<data[x]<<" ";
    }


    return 0;
}