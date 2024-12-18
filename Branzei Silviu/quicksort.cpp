#include <iostream>
using namespace std;

int sortare(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
    if (arr[j] <= pivot)
    {
    i++;
    swap(arr[i], arr[j]);
    }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
    int mid = sortare(arr, low, high);
    quicksort(arr, low, mid - 1);
    quicksort(arr, mid + 1, high);
    }
}

void afisarevec(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    cout << arr[i] << " " <<endl;
}

int main()
{
    int arr[] = { 1, 9, 2, 5, 6, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Vectorul original: " <<endl;
    afisarevec(arr, n);
    quicksort(arr, 0, n - 1);
    cout << "Vectorul dupa sortare: " <<endl;
    afisarevec(arr, n);
    return 0;
}
