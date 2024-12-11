// Scrieti un program in C++ care det. cel mai mare divizor comun pentru 2 numere intregi citite de la tastatura
#include <iostream>
using namespace std;
int cmmdc(int a, int b) {
	while (b != 0) {
		int rest = a % b;
		a = b;
		b = rest;
	}
	return a;
}
int main()
{
	int num1, num2;
	cout << "Introduce valoarea primului nummar: ";
	cin >> num1;
	cout << "Introduce valoarea al doilea numar: ";
	cin >> num2;
	cout << "Cel mai mare divizor este:" << cmmdc(num1, num2) << endl;
	return 0;
}