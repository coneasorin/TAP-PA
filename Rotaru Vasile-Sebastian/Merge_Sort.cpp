#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void merge(vector<int>& arr, int left, int middle, int right) {
    vector<int> temp(right - left + 1);
    int i = left, j = middle + 1, k = 0;

    while (i <= middle && j <= right) {
        temp[k++] = (arr[i] <= arr[j]) ? arr[i++] : arr[j++];
    }

    while (i <= middle) {
        temp[k++] = arr[i++];
    }

    while (j <= right) {
        temp[k++] = arr[j++];
    }

    for (int p = 0; p < k; p++) {
        arr[left + p] = temp[p];
    }
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}

int main() {
    vector<int> arr = { 12, 11, 13, 5, 6, 7 };

    cout << "Array before sorting: ";
    for (int num : arr) {
        cout << num << " ";
    }

    mergeSort(arr, 0, arr.size() - 1);

    cout << "\nArray after sorting: ";
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}