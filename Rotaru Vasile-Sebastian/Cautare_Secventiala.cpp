#include <iostream>
using namespace std;

// Funcția de căutare secvențială
int cautareSecventiala(int arr[], int dimensiune, int cautareValoare) {
    // Parcurgem fiecare element al vectorului
    for (int i = 0; i < dimensiune; i++) {
        // Dacă valoarea căutată este găsită
        if (arr[i] == cautareValoare) {
            // Returnăm indexul la care se află valoarea
            return i;
        }
    }
    // Dacă valoarea nu a fost găsită, returnăm -1
    return -1;
}

int main() {
    // Definirea unui vector de exemplu
    int arr[] = { 5, 12, 7, 3, 9, 15, 1 };
    int dimensiune = sizeof(arr) / sizeof(arr[0]);  // Calculăm dimensiunea vectorului

    // Variabila pentru valoarea introdusă de utilizator
    int cautareValoare;

    // Solicităm utilizatorului să introducă valoarea pe care o dorește căutată
    cout << "Introduceti valoarea pe care doriti sa o cautati: ";
    cin >> cautareValoare;

    // Apelăm funcția de căutare secvențială
    int rezultat = cautareSecventiala(arr, dimensiune, cautareValoare);

    // Verificăm dacă valoarea a fost găsită
    if (rezultat != -1) {
        cout << "Valoarea " << cautareValoare << " a fost gasita la indexul " << rezultat << endl;
    }
    else {
        cout << "Valoarea " << cautareValoare << " nu a fost gasita." << endl;
    }

    return 0;
}
