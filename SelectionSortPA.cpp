#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        // Schimbăm elementul minim găsit cu primul element
        swap(arr[minIdx], arr[i]);
    }
}

int main() {
    int n;
    cout << "Introduceți numărul de elemente: ";
    cin >> n;
    int arr[n];

    cout << "Introduceți elementele:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selectionSort(arr, n);

    cout << "Array-ul sortat este:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
