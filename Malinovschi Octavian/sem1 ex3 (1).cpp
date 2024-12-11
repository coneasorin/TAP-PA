// Scrieti un program care rezolva o ecuatie de gradul al 2
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    cout << "Introduceti coeficientii (a,b,c): ";
    cin >> a >> b >> c;

    double delta = b * b - 4 * a * c;
    cout << "Delta: " << delta << endl;

    if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Exista doua solutii reale distincte: " << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (delta == 0) {
        double x = -b / (2 * a);
        cout << "Exista o solutie dubla: " << endl;
       cout << "x = " << x << endl;
    }
    else {
        cout << "Nu exista solutii reale." << endl;
    }
    return 0;
}
