#include <iostream>
using namespace std;

int cautare(int vec[], int x, int n)
{
    for(int i = 0; i < x; i++)
    {
    if(vec[i] == n)
    {
    return i;
    }
    }
    return -1;
}
int main()
{
    int a, i;
    int vec[100];
    cout << "Introduceti numarul de elemente: ";
    cin >> a;
    for (i = 1; i <= a; i++)
    {
        cin >> vec[i];
    }
    int x = sizeof(vec) / sizeof(vec[0]);
    int n;
    cout << "Introduceti un numar care va fii cautat in vector: ";
    cin >> n;
    int nr = cautare(vec, x, n);
    if(nr != -1)
    {
        cout << "Elementul gasit la indexul: " << nr <<endl;
    }
    else
    {
        cout << "Elementul nu a fost gasit in vector";
    }
    return 0;
}
