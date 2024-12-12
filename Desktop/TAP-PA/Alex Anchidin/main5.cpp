/*Anchidin Alexandru Constantin
1221
seminar proiectarea algoritmilor
buble sort si inter*/

#include <iostream>
#include <vector>

using namespace std;

void sortareInterschimbare(vector<int>& vec) {
    int n = vec.size();

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (vec[i] > vec[j]) {
                int temp = vec[i];
                vec[i] = vec[j];
                vec[j] = temp;
            }
        }
    }
}

void bubbleSort(vector<int>& vec) {
    int n = vec.size();
    bool swapped;

    do {
        swapped = false;
        for (int i = 0; i < n - 1; i++) {
            if (vec[i] > vec[i + 1]) {
                int temp = vec[i];
                vec[i] = vec[i + 1];
                vec[i + 1] = temp;
                swapped = true;
            }
        }
        n--;
    } while (swapped);
}

int main() {
    int n;

    cout << "Introduceti numarul de elemente: ";
    cin >> n;

    vector<int> vec(n), vec2(n);

    cout << "Introduceti elementele vectorului: ";
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        vec2[i] = vec[i];
    }

    cout << "Vectorul inainte de sortare: ";
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    sortareInterschimbare(vec);
    cout << "Vectorul dupa sortare (Interschimbare): ";
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    bubbleSort(vec2);
    cout << "Vectorul dupa sortare (Bubble Sort): ";
    for (int i = 0; i < n; i++) {
        cout << vec2[i] << " ";
    }
    cout << endl;

    return 0;
}

