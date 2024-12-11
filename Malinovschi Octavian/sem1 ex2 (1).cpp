// Scrieti un program care determina media si suma unei liste de elemente citite de la tastatura
#include <iostream>
using namespace std;
int main()
{
	int n;
	double sum = 0, num;
	cout << "Cite numere vrei sa introduci: ";
	cin >> n;
	cout << "Introdu numerele: ";
	for (int i = 0; i < n; ++i) {
		cin >> num;
		sum += num;
	}
	cout << "Suma: " << sum << endl;
	cout << "Media: " << (n > 0 ? sum / n : 0) << endl;
	return 0;
}
