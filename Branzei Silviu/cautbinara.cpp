#include <iostream>
#include <vector>
using namespace std;

int cbinara(const vector<int>&arr, int nr)
{
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if(arr[mid] == nr)
        {
            return mid;
        }
        if(arr[mid] < nr)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int nrcautat, rez;
    vector<int> arr = {1, 2, 3, 5, 7, 9, 10};
    cout << "Introduceti elementul cautat: " <<endl;
    cin >> nrcautat;
    rez = cbinara(arr, nrcautat);
    if(rez != -1)
    {
        cout << "Elementul " << nrcautat << " a fost gasit la indexul: " << rez + 1 <<endl;
    }
    else
    {
        cout << "Elementul " << nrcautat << " nu a fost gasit." <<endl;
    }
    return 0;
}
