#include <iostream>
#include <vector>
using namespace std;

// Funcție pentru a inversa o subsecvență a array-ului
void flip(vector<int>& arr, int k) {
    int start = 0;
    while (start < k) {
        swap(arr[start], arr[k]);
        start++;
        k--;
    }
}

// Funcție pentru a găsi indexul celui mai mare element din subarray
int findMax(vector<int>& arr, int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i; // Înlocuiește indexul maxim
        }
    }
    return maxIndex;
}

// Funcția principală care implementează Pancake Sort
void pancakeSort(vector<int>& arr) {
    for (int currSize = arr.size(); currSize > 1; currSize--) {
        // Găsește indexul celui mai mare element
        int maxIndex = findMax(arr, currSize);

        // Încearcă să plasăm cel mai mare element la sfârșitul subarray-ului
        if (maxIndex != currSize - 1) {
            // Flip pentru a aduce max la început
            if (maxIndex != 0) {
                flip(arr, maxIndex);
            }

            // Flip pentru a plasa max la poziția corectă
            flip(arr, currSize - 1);
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
    vector<int> arr = { 10, 5, 8, 3, 7, 6 };

    cout << "Array-ul original: ";
    printArray(arr);

    pancakeSort(arr);

    cout << "Array-ul sortat: ";
    printArray(arr);
    return 0;
}