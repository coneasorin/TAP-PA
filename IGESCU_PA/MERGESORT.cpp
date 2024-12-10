#include <iostream>
using namespace std;

// Funcția pentru a combina două sub-array-uri sortate
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Creăm array-uri temporare
    int L[n1], R[n2];

    // Copiem datele în array-urile temporare L[] și R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Combinăm array-urile temporare înapoi în arr[left..right]
    int i = 0; // Indexul inițial al primului sub-array
    int j = 0; // Indexul inițial al celui de-al doilea sub-array
    int k = left; // Indexul inițial al array-ului combinat
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copiem elementele rămase din L[], dacă există
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copiem elementele rămase din R[], dacă există
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Funcția principală pentru Merge Sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // Găsim punctul de mijloc
        int mid = left + (right - left) / 2;

        // Sortăm prima și a doua jumătate
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Combinăm jumătățile sortate
        merge(arr, left, mid, right);
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
    // Sortăm array-ul folosind Merge Sort
    mergeSort(arr, 0, n - 1);
    // Afișăm array-ul sortat
    cout << "Array-ul sortat: ";
    printArray(arr, n);
    return 0;
}
