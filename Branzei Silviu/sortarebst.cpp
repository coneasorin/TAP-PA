#include <iostream>
using namespace std;

struct nod
{
    int data;
    nod* left;
    nod* right;

    nod(int val)
    {
        data = val;
        left = right = nullptr;
    }
};

nod* insert(nod* root, int val)
{
    if (root == nullptr)
    {
        return new nod(val);
    }

    if (val < root->data)
    {
        root->left = insert(root->left, val);
    }
    else
    {
        root->right = insert(root->right, val);
    }

    return root;
}

void inOrderTraversal(nod* root)
{
    if (root != nullptr)
    {
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}


void BTSort(int arr[], int n) 
{
    nod* root = nullptr;
    for (int i = 0; i < n; i++) 
    {
        root = insert(root, arr[i]);
    }

    cout << "Vectorul sortat este: ";
    inOrderTraversal(root);
    cout << endl;
}

int main() 
{
    int arr[] = {8, 2, 7, 9, 1, 6, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    BTSort(arr, n);

    return 0;
}
