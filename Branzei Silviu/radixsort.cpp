#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortare(vector<int>& arr, int exp)
{
    int n = arr.size();
    vector<int> output(n);
    int count[10] = { 0 };
    for (int i = 0; i < n; i++)
    {
        count[(arr[i] / exp) % 10]++;
    }
    
    for (int i = 1; i < 10; i++)
    {
        count[i] += count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}

void radixSort(vector<int>& arr)
{
    int elem_max = *max_element(arr.begin(), arr.end());

    for (int exp = 1; elem_max / exp > 0; exp *= 10)
    {
        sortare(arr, exp);
    }
}

void afiseaza(const vector<int>& arr)
{
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}

int main() 
{
    vector<int> arr = { 9, 10, 5, 6, 1, 3, 2, 4 };
    cout << "Vectorul original: "<<endl;
    afiseaza(arr);
    radixSort(arr);
    cout << "Vectorul sortat: "<<endl;
    afiseaza(arr);
    return 0;
}