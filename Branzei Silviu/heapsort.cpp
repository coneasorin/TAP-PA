#include <iostream>
using namespace std;

int heap(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        return heap(arr, n, largest);
    }

    return i;
}

int* heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heap(arr, n, i);
    }
    for (int i = n - 1; i > 0; i--) 
    {
        swap(arr[0], arr[i]);
        heap(arr, i, 0);
    }

    return arr;
}

void afiseaza(int arr[], int n) 
{
    for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
    cout << endl;
}

int main() 
{
    int arr[] = {1, 9, 3, 5, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Vectorul original: "<<endl;
    afiseaza(arr, n);
    heapSort(arr, n);
    cout << "Vectorul sortat: "<<endl;
    afiseaza(arr, n);
    return 0;
}