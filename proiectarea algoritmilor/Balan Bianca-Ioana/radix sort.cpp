#include <iostream>
#include <vector>
using namespace std;

void countingSort(int arr[], int n, int exp) {
    int output[n];
    int count[10] = {0};
    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}
void radixSort(int arr[], int n) {
    int maxElement = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > maxElement)
            maxElement = arr[i];

    for (int exp = 1; maxElement / exp > 0; exp *= 10)
        countingSort(arr, n, exp);
}

int main() {
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Vectorul initial: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    radixSort(arr, n);

    cout << "Vectorul sortat: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
