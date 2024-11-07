


#include <iostream>
using namespace std;

void quickSort(int arr[], int left, int right) {
    int i = left, j = right, temp;
    int pivot = arr[(left + right) / 2];

    while (i <= j) {
        while (arr[i] < pivot) i++;
        while (arr[j] > pivot) j--;
        if (i <= j) {
            temp = arr[i];
            arr[i++] = arr[j];
            arr[j--] = temp;
        }
    }

    if (left < j) quickSort(arr, left, j);
    if (i < right) quickSort(arr, i, right);
}

int main() {
    int arr[] = { 100, 35, 21, 122, 2, 11, 90 };
    int n = sizeof(arr) / sizeof(int);

    quickSort(arr, 0, n - 1);

    cout << "Array sortat: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}



