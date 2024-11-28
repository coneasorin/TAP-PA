#include <algorithm>
#include <cassert>
#include <iostream>
using namespace std;

template <typename T>
void afisareVector(T *arr, int dim) {
    for (int i = 0; i < dim; i++) cout << arr[i] << "  ";
    cout << "\n";
}

template <typename T>
void heapify(T *arr, int dim, int i) {
    int celMaiMare = i;
    int stanga = 2 * i + 1;
    int dreapta = 2 * i + 2;

    if (stanga < dim && arr[stanga] > arr[celMaiMare])
        celMaiMare = stanga;

    if (dreapta < dim && arr[dreapta] > arr[celMaiMare])
        celMaiMare = dreapta;

    if (celMaiMare != i) {
        swap(arr[i], arr[celMaiMare]);
        heapify(arr, dim, celMaiMare);
    }
}

template <typename T>
void heapSort(T *arr, int dim) {
    for (int i = dim / 2 - 1; i >= 0; i--)
        heapify(arr, dim, i);

    for (int i = dim - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

void teste() {
    cout << "Test 1\n";
    int arr[] = {-10, 78, -1, -6, 7, 4, 94, 5, 99, 0};
    int dim = sizeof(arr) / sizeof(arr[0]);
    afisareVector(arr, dim);  // afisare inainte de sortare
    heapSort(arr, dim);       // sortarea vectorului
    afisareVector(arr, dim);  // afisare dupa sortare
    assert(is_sorted(arr, arr + dim));
    cout << "Test 1 trecut\n========================\n";

    cout << "Test 2\n";
    double arr2[] = {4.5, -3.6, 7.6, 0, 12.9};
    dim = sizeof(arr2) / sizeof(arr2[0]);
    afisareVector(arr2, dim);
    heapSort(arr2, dim);
    afisareVector(arr2, dim);
    assert(is_sorted(arr2, arr2 + dim));
    cout << "Test 2 trecut\n";
}

// Functia principala 
int main() {
    teste();
    return 0;
}
