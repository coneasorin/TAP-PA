#include <iostream>
#include <vector>
using namespace std;

void countingSort(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }

    vector<int> count(maxVal + 1, 0);

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    int index = 0;
    for (int i = 0; i <= maxVal; i++) {
        while (count[i] > 0) {
            arr[index++] = i;
            count[i]--;
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

    countingSort(arr, n);

    cout << "Vectorul dupa sortare: ";
    afisareVector(arr, n);

    return 0;
}
