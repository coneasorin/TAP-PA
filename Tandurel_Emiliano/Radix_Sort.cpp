#include <iostream>
#include <vector>
using namespace std;

// Funcție pentru a face counting sort pe un array în funcție de cifra curentă
void countingSort(vector<int>& arr, int exp) {
    int n = arr.size();
    vector<int> output(n); // Array-ul de ieșire
    int count[10] = { 0 };    // Inițializare a contorului pentru fiecare cifră (0-9)

    // Numără aparițiile cifrelor în funcție de exp
    for (int i = 0; i < n; i++) {
        count[(arr[i] / exp) % 10]++;
    }

    // Schimbă count[0...9] astfel încât să conțină pozițiile finale în output
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // Construiește array-ul de ieșire
    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copiază array-ul de ieșire în array-ul original
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

// Funcția principală care implementează Radix Sort
void radixSort(vector<int>& arr) {
    // Găsește valoarea maximă pentru a determina numărul de cifre
    int maxElement = *max_element(arr.begin(), arr.end());

    // Aplică counting sort pentru fiecare cifră
    for (int exp = 1; maxElement / exp > 0; exp *= 10) {
        countingSort(arr, exp);
    }
}

// Funcție pentru a afișa un array
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = { 170, 45, 75, 90, 802, 24, 2, 66 };

    cout << "Array-ul original: ";
    printArray(arr);

    radixSort(arr);

    cout << "Array-ul sortat: ";
    printArray(arr);
    return 0;
}