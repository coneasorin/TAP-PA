#include <iostream>
using namespace std;

// Funcția pentru a obține valoarea maximă din array
int getMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

// Funcția pentru a face Counting Sort pe baza cifrei semnificative
void countSort(int arr[], int n, int exp) {
    int output[n]; // Array-ul de ieșire
    int count[10] = {0}; // Array-ul de numărare inițializat cu 0

    // Stocăm numărul de apariții în count[]
    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    // Modificăm count[] astfel încât să conțină pozițiile elementelor în array-ul de ieșire
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Construim array-ul de ieșire
    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copiem array-ul de ieșire în arr[], astfel încât arr[] să conțină elementele sortate
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

// Funcția principală pentru Radix Sort
void radixSort(int arr[], int n) {
    // Găsim valoarea maximă pentru a ști numărul de cifre
    int m = getMax(arr, n);

    // Facem Counting Sort pentru fiecare cifră semnificativă
    for (int exp = 1; m / exp > 0; exp *= 10)
        countSort(arr, n, exp);
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
    // Sortăm array-ul folosind Radix Sort
    radixSort(arr, n);
    // Afișăm array-ul sortat
    cout << "Array-ul sortat: ";
    printArray(arr, n);
    return 0;
}
