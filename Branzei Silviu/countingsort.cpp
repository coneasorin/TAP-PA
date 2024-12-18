#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortare(vector<int>& arr)
{
    if (arr.empty()) return;
    int valmax = *max_element(arr.begin(), arr.end());
    vector<int> count(valmax + 1, 0);
    for (int num : arr)
    {
        count[num]++;
    }

    int index = 0;
    for (int i = 0; i <= valmax; i++)
    {
        while (count[i] > 0)
        {
            arr[index++] = i;
            count[i]--;
        }
    }
}

void printArray(const vector<int>& arr)
{
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = { 2, 6, 1, 4, 7, 5, 3 };
    cout << "Vectorul original: "<<endl;
    printArray(arr);
    sortare(arr);
    cout << "Vectorul sortat este: " <<endl;
    printArray(arr);
    return 0;
}