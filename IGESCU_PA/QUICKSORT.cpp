//TEMA IGESCU1221B TI QUICKSORT
#include <iostream>
using namespace std;

// Funcția pentru schimbarea a două elemente
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Funcția pentru a găsi poziția de partiționare
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Alegem ultimul element ca pivot
    int i = (low - 1); // Indexul elementului mai mic

    for (int j = low; j <= high - 1; j++) {
        // Dacă elementul curent este mai mic sau egal cu pivotul
        if (arr[j] <= pivot) {
            i++; // Incrementăm indexul elementului mai mic
            swap(&arr[i], &arr[j]); // Schimbăm elementele
        }
    }
    swap(&arr[i + 1], &arr[high]); // Schimbăm pivotul la poziția corectă
    return (i + 1);
}

// Funcția principală pentru Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Pi este indexul de partiționare
        int pi = partition(arr, low, high);

        // Sortăm elementele separat înainte și după partiționare
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Funcția pentru afișarea array-ului
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    // Cerem utilizatorului să introducă numărul de elemente
    cout << "Introdu numarul de elemente: ";
    cin >> n;
    int arr[n];
    // Cerem utilizatorului să introducă elementele array-ului
    cout << "Introdu elementele: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // Afișăm array-ul inițial
    cout << "Array-ul inițial: ";
    printArray(arr, n);
    // Sortăm array-ul folosind Quick Sort
    quickSort(arr, 0, n - 1);
    // Afișăm array-ul sortat
    cout << "Array-ul sortat: ";
    printArray(arr, n);
    return 0;
}
