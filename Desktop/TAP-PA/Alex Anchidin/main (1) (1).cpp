#include <iostream>
using namespace std;

int cmmdc(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int num1, num2;

    
    cout << "Introduceți primul număr: ";
    cin >> num1;
    cout << "Introduceți al doilea număr: ";
    cin >> num2;

   
    int rezultat = cmmdc(num1, num2);
    cout << "Cel mai mare divizor comun este: " << rezultat << endl;

    return 0;
}
