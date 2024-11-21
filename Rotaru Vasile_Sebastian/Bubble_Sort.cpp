#include <iostream>
using namespace std;

// Funcția pentru a realiza sortarea bubble sort
void bubbleSort(int arr[], int n) {
    bool swapped; // Variabilă pentru a verifica dacă s-au făcut schimbări
    for (int i = 0; i < n - 1; i++) {
        swapped = false; // Resetează swapped la fiecare iterație
        for (int j = 0; j < n - i - 1; j++) {
            // Compară elementele adiacente
            if (arr[j] > arr[j + 1]) {
                // Schimbă elementele dacă sunt în ordinea greșită
                swap(arr[j], arr[j + 1]);
                swapped = true; // Marchează că s-au făcut schimbări
            }
        }
        // Dacă nu s-au făcut schimbări, array-ul este sortat
        if (!swapped) {
            break;
        }
    }
}

// Funcție pentru a afișa un array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array-ul original: ";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "Array-ul sortat: ";
    printArray(arr, n);
    return 0;
}