#include <iostream>
using namespace std;

// Funcția de căutare binară
int cautareBinara(int arr[], int dimensiune, int cautareValoare) {
    int stanga = 0;  // Indicele de început al intervalului
    int dreapta = dimensiune - 1;  // Indicele de final al intervalului

    // Cât timp există intervale valide de căutare
    while (stanga <= dreapta) {
        int mijloc = stanga + (dreapta - stanga) / 2;  // Calculăm mijlocul intervalului

        // Dacă valoarea căutată este la mijloc
        if (arr[mijloc] == cautareValoare) {
            return mijloc;  // Returnăm indexul
        }

        // Dacă valoarea căutată este mai mică decât valoarea la mijloc,
        // căutăm în partea stângă a intervalului
        if (arr[mijloc] > cautareValoare) {
            dreapta = mijloc - 1;
        }
        // Dacă valoarea căutată este mai mare decât valoarea la mijloc,
        // căutăm în partea dreaptă a intervalului
        else {
            stanga = mijloc + 1;
        }
    }

    // Dacă valoarea nu a fost găsită, returnăm -1
    return -1;
}

int main() {
    // Definirea unui vector ordonat
    int arr[] = { 1, 3, 5, 7, 9, 12, 15 };
    int dimensiune = sizeof(arr) / sizeof(arr[0]);  // Calculăm dimensiunea vectorului

    // Variabila pentru valoarea introdusă de utilizator
    int cautareValoare;

    // Solicităm utilizatorului să introducă valoarea pe care o dorește căutată
    cout << "Introduceti valoarea pe care doriti sa o cautati: ";
    cin >> cautareValoare;

    // Apelăm funcția de căutare binară
    int rezultat = cautareBinara(arr, dimensiune, cautareValoare);

    // Verificăm dacă valoarea a fost găsită
    if (rezultat != -1) {
        cout << "Valoarea " << cautareValoare << " a fost gasita la indexul " << rezultat << endl;
    }
    else {
        cout << "Valoarea " << cautareValoare << " nu a fost gasita." << endl;
    }

    return 0;
}
