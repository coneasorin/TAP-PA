#include <iostream>
using namespace std;

int cautareBinara(int arr[], int n, int target) {
    int stanga = 0;
    int dreapta = n - 1;

    while (stanga <= dreapta) {
        int mijloc = stanga + (dreapta - stanga) / 2;

        if (arr[mijloc] == target)
            return mijloc;
        else if (arr[mijloc] < target)
            stanga = mijloc + 1;
        else
            dreapta = mijloc - 1;
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
    int arr[] = {11, 12, 22, 25, 34, 64, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 25;

    cout << "Vectorul sortat: ";
    afisareVector(arr, n);

    int rezultat = cautareBinara(arr, n, target);

    if (rezultat != -1)
        cout << "Elementul " << target << " a fost gasit la indexul " << rezultat << endl;
    else
        cout << "Elementul " << target << " nu a fost gasit" << endl;

    return 0;
}
