#include <iostream>
using namespace std;

// Fungsi untuk menggabungkan dua sub-array yang sudah terurut
void merge(int arr[], int temp[], int left, int mid, int right) {
    int i = left;    // Indeks sub-array kiri
    int j = mid + 1; // Indeks sub-array kanan
    int k = left;    // Indeks array sementara

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    // Salin elemen yang tersisa dari sub-array kiri, jika ada
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // Salin elemen yang tersisa dari sub-array kanan, jika ada
    while (j <= right) {
        temp[k++] = arr[j++];
    }

    // Salin elemen dari array sementara ke array asli
    for (i = left; i <= right; i++) {
        arr[i] = temp[i];
    }
}

// Fungsi utama untuk mengurutkan array menggunakan Merge Sort iteratif
void mergeSort(int arr[], int n) {
    int temp[n]; // Array sementara
    for (int size = 1; size < n; size *= 2) {
        for (int left = 0; left < n - size; left += 2 * size) {
            int mid = min(left + size - 1, n - 1);
            int right = min(left + 2 * size - 1, n - 1);
            merge(arr, temp, left, mid, right);
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 8, 10, 2, 5, 6, 7, 3};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array sebelum disortir: ";
    printArray(arr, arr_size);

    mergeSort(arr, arr_size);

    cout << "Array setelah disortir: ";
    printArray(arr, arr_size);

    return 0;
}