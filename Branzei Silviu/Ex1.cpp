#include <iostream>
using namespace std;

int main()
{
        int n;
        double nr, media, s = 0;
        cout << "Introduceti numarul de elemente: ";
        cin >> n;
        
        for (int i = 0; i < n; i++) 
        {
            cout << "Introduceti numarul " << (i + 1) << ": ";
            cin >> nr;
            s += nr; 
        }

        media = s / n;
        cout << "Suma numerelor este: " << s << endl;
        cout << "Media numerelor este: " << media << endl;
        return 0; 
}