#include <iostream>
using namespace std;
void shellSort(int array[], int n){
    for (int jarak = n / 2; jarak > 0; jarak /= 2){
        for (int i = jarak; i < n; i += 1){
            int temp = array[i];
            int j;
                for (j = i; j >= jarak && array[j - jarak] > temp; j -= jarak){
                    array[j] = array[j - jarak];
                }
            array[j] = temp;
        }
    }
}
void printArray(int array[], int size){
     int i;
    for (i = 0; i < size; i++)
    cout << array[i] << " ";
    cout << endl;
}
int main(){
    int data[] = {8, 9, 5, 4, 1, 3, 2, 6, 7, 10,23,11,34,21,14,17,77,65,38,22,89};
    int size = sizeof(data) / sizeof(data[0]);
    cout<<"Data Sebelum diurutkan "<<endl;
    int i; 
    for (i = 0; i < 6; i++)
    {cout << data[i] << " ";}
    cout << endl;
    shellSort(data, size);
    cout << "Data Setelah diurutkan : \n";
  printArray(data, size);
}