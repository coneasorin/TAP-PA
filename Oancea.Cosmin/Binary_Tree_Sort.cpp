#include <iostream>
using namespace std;

struct Nod {
    int valoare;
    Nod* stanga;
    Nod* dreapta;
    
    Nod(int val) : valoare(val), stanga(nullptr), dreapta(nullptr) {}
};

class ArboreBin {
public:
    Nod* radacina;
    
    ArboreBin() : radacina(nullptr) {}

    void inserare(int valoare) {
        radacina = inserareRecursiv(radacina, valoare);
    }

    void parcurgereInorder() {
        parcurgereInorderRecursiv(radacina);
    }

private:
    Nod* inserareRecursiv(Nod* nod, int valoare) {
        if (!nod) return new Nod(valoare);
        
        if (valoare < nod->valoare)
            nod->stanga = inserareRecursiv(nod->stanga, valoare);
        else
            nod->dreapta = inserareRecursiv(nod->dreapta, valoare);

        return nod;
    }

    void parcurgereInorderRecursiv(Nod* nod) {
        if (nod) {
            parcurgereInorderRecursiv(nod->stanga);
            cout << nod->valoare << " ";
            parcurgereInorderRecursiv(nod->dreapta);
        }
    }
};

int main() {
    ArboreBin arbore;
    int vector[] = {5, 3, 8, 1, 4, 7, 9};
    int n = sizeof(vector) / sizeof(vector[0]);
    
    for (int i = 0; i < n; i++) {
        arbore.inserare(vector[i]);
    }

    cout << "Ordinea sortata: ";
    arbore.parcurgereInorder();
    return 0;
}
