#include <iostream>
#include <vector>
using namespace std;

void sortare(vector<int>& vec) 
{
    int n = vec.size();
    int i, j;
    for (i = 0; i < n - 1; i++) 
{
    for (j = 0; j < n - i - 1; j++) 
{
    if (vec[j] > vec[j + 1]) 
{
    swap(vec[j], vec[j + 1]);
}
}
}
}

int main() 
{
    vector<int> vec = {1, 2, 3, 5, 4};
    cout << "Vectorul initial: ";
    for (int nr : vec) 
    {
    cout << nr << " ";
    }
    cout << endl;

    sortare(vec);
    cout << "Vectorul sortat: ";
    for (int nr : vec) 
    {
    cout << nr << " ";
    }
    cout << endl;
    return 0;
}