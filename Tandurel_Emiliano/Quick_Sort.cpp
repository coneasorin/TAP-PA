#include <iostream>
using namespace std;

// Funcția pentru a face partiția array-ului
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Alegeți ultimul element ca pivot
    int i = (low - 1); // Indexul celui mai mic element

    for (int j = low; j <= high - 1; j++) {
        // Dacă elementul curent este mai mic sau egal cu pivotul
        if (arr[j] <= pivot) {
            i++; // Incrementați indexul celui mai mic element
            swap(arr[i], arr[j]); // Schimbați
        }
    }
    swap(arr[i + 1], arr[high]); // Plasați pivotul în poziția corectă
    return (i + 1); // Returnează indexul pivotului
}

// Funcția principală care implementează Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // partition este indexul care împarte array-ul
        int pi = partition(arr, low, high);

        // Recursiv, sortăm elementele în cele două sub-array-uri
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Funcție pentru a afișa un array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = { 10, 7, 8, 9, 1, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array-ul original: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Array-ul sortat: ";
    printArray(arr, n);
    return 0;
}