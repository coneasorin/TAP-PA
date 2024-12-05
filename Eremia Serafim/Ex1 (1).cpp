#include <iostream>
using namespace std;

int cmmdc( int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int num1, num2;

    cout << "Introdu primul numar: ";
    cin >> num1;
    cout << "Introdu al doilea numar: ";
    cin >> num2;

    int rezultat = cmmdc(num1, num2);

    cout << "Cel mai mare divizor comun dintre " << num1 << " si " << num2 << " este: " << rezultat << endl;

    return 0;
}
