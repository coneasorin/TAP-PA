#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void flip(int arr[], int k) {
    for (int i = 0; i < k / 2; i++)
        swap(arr[i], arr[k - i - 1]);
}
int findMaxIndex(int arr[], int n) {
    int maxIdx = 0;
    for (int i = 1; i < n; i++)
        if (arr[i] > arr[maxIdx])
            maxIdx = i;
    return maxIdx;
}
void pancakeSort(int arr[], int n) {
    for (int currSize = n; currSize > 1; currSize--) {
        int maxIdx = findMaxIndex(arr, currSize);
        if (maxIdx != currSize - 1) {
            if (maxIdx > 0) {
                flip(arr, maxIdx + 1);
                cout << "Flip pana la index " << maxIdx << ": ";
                for (int i = 0; i < n; i++) cout << arr[i] << " ";
                cout << endl;
            }
            flip(arr, currSize);
            cout << "Flip pana la index " << currSize - 1 << ": ";
            for (int i = 0; i < n; i++) cout << arr[i] << " ";
            cout << endl;
        }
    }
}
int main() {
    int arr[] = {3, 6, 1, 10, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Vectorul initial: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    pancakeSort(arr, n);

    cout << "Vectorul sortat: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
