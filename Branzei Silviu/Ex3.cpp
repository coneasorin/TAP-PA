#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, d;
    cout << "Introduceti a: ";
    cin >> a;
    cout << "Introduceti b: ";
    cin >> b;
    cout << "Introduceti c: ";
    cin >> c;

    if (a == 0)
    {
        cout << "Invalid!" << endl;
        return 1;
    }

    if (d > 0)
    {
        double x1 = (-b + sqrt(d)) / (2 * a);
        double x2 = (-b - sqrt(d)) / (2 * a);
        cout << "x1 = " << x1 << " si x2 = " << x2 << endl;
    } 
    else
 
    if (d == 0)
    {
        double x = -b / (2 * a);        
        cout << "x = " << x << endl;
    }
    else
    {
        cout << "Ecuația nu are soluții reale." << endl;
    }

    return 0;
}