// Creaza un program care foloseste bubble sort
#include<iostream>
using namespace std;
void bubblesort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void printArray(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main() {
	int arr[] = { 5,2,7,1,3,4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Array-ul nesortat: ";
	printArray(arr, n);

	bubblesort(arr, n);
	cout << "Array-ul sortat: ";
	printArray(arr, n); 
	return 0;
}