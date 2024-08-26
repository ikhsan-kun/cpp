#include <iostream>
using namespace std;

/*void merge(int arr[], int kiri, int kanan, int tengah) {
    int L1 = tengah - kiri + 1;
    int R1 = kanan - tengah;

    int L2[L1], R2[R1];

    for (int i = 0; i < L1; i++) {
        L2[i] = arr[kiri + i];
    }
    for (int y = 0; y < R1; y++) {
        R2[y] = arr[tengah + 1 + y];
    }

    int i = 0, y = 0, k = kiri;

    while (i < L1 && y < R1) {
        if (L2[i] >= R2[y]) {
            arr[k] = L2[i];
            i++;
        } else {
            arr[k] = R2[y];
            y++;
        }
        k++;
    }

    while (i < L1) {
        arr[k] = L2[i];
        i++;
        k++;
    }

    while (y < R1) {
        arr[k] = R2[y];
        y++;
        k++;
    }
}*/

void mergesort(int arr[], int kiri, int kanan) {
    if (kiri < kanan) {
        int tengah = kiri + (kanan - kiri) / 2;

        mergesort(arr, kiri, tengah);
        mergesort(arr, tengah + 1, kanan);

        cout<<"\n\ntengah : "<<tengah<<", "<<"kiri : "<<kiri<<", "<<"kanan : "<<kanan<<endl<<endl;

        int L1 = tengah - kiri + 1;
        int R1 = kanan - tengah;

        cout<<"l1 : "<<L1<<", "<<"R1 : "<<R1<<endl<<endl;

        int L2[L1], R2[R1];

        for (int i = 0; i < L1; i++) {
        L2[i] = arr[kiri + i];
        }
        cout<<"kiri"<<endl;
        for(int x = 0; x<L1; x++){
            cout<<L2[x]<<", ";
        }
        for (int y = 0; y < R1; y++) {
        R2[y] = arr[tengah + 1 + y];
        }
        cout<<"\nkanan"<<endl;
         for(int u = 0; u<L1; u++){
            cout<<R2[u]<<", ";
        }

        int i = 0, y = 0, k = kiri;

        while (i < L1 && y < R1) {
        if (L2[i] <= R2[y]) {
            arr[k] = L2[i];
            i++;
        } else {
            arr[k] = R2[y];
            y++;
        }
        k++;
        }

        while (i < L1) {
        arr[k] = L2[i];
        i++;
        k++;
        }

        while (y < R1) {
        arr[k] = R2[y];
        y++;
        k++;
        }
    }
}

void tampil(int arr[], int in) {
    for (int i = 0; i < in; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

int main() {
    int arr[] = {8, 9, 5, 4, 1, 3, 2, 6, 7, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "sebelum di urutkan" << endl;
    tampil(arr, n);

    mergesort(arr, 0, n - 1);

    cout << "setelah di urutkan" << endl;
    tampil(arr, n);

    return 0;
}
