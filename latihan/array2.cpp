#include<iostream>
using namespace std;


int main (){
    int a[4]={87, 76, 89, 75};
    int b=sizeof(a)/sizeof(*a);
    cout<<b;
    
    return 0;
}