#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Introdu numarul de elemente: ";
    cin >> n;
    vector<int> numere(n);
    cout << "Introdu " << n << " numere:\n";
    for (int i = 0; i < n; ++i) {
        cin >> numere[i];
    }
    sort(numere.begin(), numere.end());
    cout << "Numerele sortate in ordine crescatoare sunt: ";
    for (int i = 0; i < n; ++i) {
        cout << numere[i] << " ";
    }
    cout << endl;
    return 0;
}
