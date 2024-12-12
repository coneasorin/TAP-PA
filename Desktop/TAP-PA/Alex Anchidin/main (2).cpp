#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    double suma = 0.0, media;
    
    cout << "Introdu numărul de elemente: ";
    cin >> n;

    vector<double> lista(n);

    cout << "Introdu " << n << " numere: " << endl;
    for (int i = 0; i < n; ++i) {
        cin >> lista[i];
        suma += lista[i];
    }

    if (n > 0) {
        media = suma / n;
        cout << "Suma: " << suma << endl;
        cout << "Media: " << media << endl;
    } else {
        cout << "Lista este goală, nu se poate calcula media." << endl;
    }

    return 0;
}
