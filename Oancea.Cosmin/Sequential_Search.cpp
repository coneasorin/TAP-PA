#include <iostream>
using namespace std;

int cautareSecventiala(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1; // daca elementul nu a fost gasit
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
    int target = 25;

    cout << "Vectorul: ";
    afisareVector(arr, n);

    int rezultat = cautareSecventiala(arr, n, target);

    if (rezultat != -1)
        cout << "Elementul " << target << " a fost gasit la indexul " << rezultat << endl;
    else
        cout << "Elementul " << target << " nu a fost gasit" << endl;

    return 0;
}
