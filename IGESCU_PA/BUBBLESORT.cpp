//TEMA IGESCU 1221B TI BUBBLESORT
#include <iostream>
using namespace std;

// Funcția pentru Bubble Sort
void bubbleSort(int arr[], int n) {
    // Parcurgem array-ul
    for (int i = 0; i < n-1; i++) {
        // Ultimele i elemente sunt deja sortate
        for (int j = 0; j < n-i-1; j++) {
            // Dacă elementul curent este mai mare decât următorul, le schimbăm între ele
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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
    // Sortăm array-ul folosind Bubble Sort
    bubbleSort(arr, n);
    // Afișăm array-ul sortat
    cout << "Array-ul sortat: ";
    printArray(arr, n);
    return 0;
}
