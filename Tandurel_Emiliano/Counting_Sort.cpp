#include <iostream>
#include <vector>
using namespace std;

// Funcție pentru a realiza sortarea Counting Sort
void countingSort(vector<int>& arr) {
    // Verificăm dacă array-ul este gol
    if (arr.empty()) return;

    // Pas 1: Găsim valoarea maximă din array pentru a determina dimensiunea count array-ului
    int maxVal = *max_element(arr.begin(), arr.end());

    // Pas 2: Inițializăm un array count de dimensiune maxVal + 1 (deoarece indexările încep de la 0)
    vector<int> count(maxVal + 1, 0);

    // Pas 3: Numărăm aparițiile fiecărui element
    for (int num : arr) {
        count[num]++;
    }

    // Pas 4: Actualizăm array-ul original în funcție de count
    int index = 0; // Index pentru a salva în array-ul original
    for (int i = 0; i <= maxVal; i++) {
        // Dacă count[i] > 0, repetăm i de count[i] ori
        while (count[i] > 0) {
            arr[index++] = i; // Salvăm elementul i în array-ul original
            count[i]--; // Decrementăm count
        }
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
    // Definim un array de numere întregi
    vector<int> arr = { 4, 2, 2, 8, 3, 3, 1 };

    cout << "Array-ul original: ";
    printArray(arr);

    // Apelăm funcția de sortare
    countingSort(arr);

    cout << "Array-ul sortat: ";
    printArray(arr);
    return 0;
}