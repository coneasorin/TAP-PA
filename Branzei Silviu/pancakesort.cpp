#include <iostream>
#include <vector>
using namespace std;

void flip(vector<int>& arr, int k)
{
    int start = 0;
    while (start < k)
    {
        swap(arr[start], arr[k]);
        start++;
        k--;
    }
}

int gasestemax(vector<int>& arr, int n)
{
    int maxIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
    }
    return maxIndex;
}

void pancakesort(vector<int>& arr)
{
    for (int currSize = arr.size(); currSize > 1; currSize--)
    {
        int maxIndex = gasestemax(arr, currSize);
        if (maxIndex != currSize - 1)
        {
            if (maxIndex != 0)
            {
                flip(arr, maxIndex);
            }

            flip(arr, currSize - 1);
        }
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
    vector<int> arr = { 9, 4, 6, 2, 5, 1 };
    cout << "Vectorul original: " <<endl;
    afiseaza(arr);
    pancakesort(arr);
    cout << "Vectorul sortat: " <<endl;
    afiseaza(arr);
    return 0;
}