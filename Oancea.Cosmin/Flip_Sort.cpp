#include <iostream>
using namespace std;

void flipSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Flip (schimbare) a elementelor
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void afisareVector(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Vectorul inainte de sortare: ";
    afisareVector(arr, n);

    flipSort(arr, n);

    cout << "Vectorul dupa sortare: ";
    afisareVector(arr, n);

    return 0;
}
