#include <iostream>
using namespace std;

// Funcția pentru sortarea secvențială
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
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
    int* arr = new int[n];
    // Cerem utilizatorului să introducă elementele array-ului
    cout << "Introdu elementele: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // Afișăm array-ul inițial
    cout << "Array-ul initial: ";
    printArray(arr, n);
    // Sortăm array-ul folosind sortarea secvențială
    selectionSort(arr, n);
    // Afișăm array-ul sortat
    cout << "Array-ul sortat: ";
    printArray(arr, n);
    // Eliberăm memoria alocată dinamic
    delete[] arr;
    return 0;
}
