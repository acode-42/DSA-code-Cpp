// left rotating an array 'arr' of size n by one place

#include <bits/stdc++.h>

using namespace std;

void rotate(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = temp;
}

void printList(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cin >> size;
    int arr[size];
    cout << "Enter in array:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    rotate(arr, size);
    printList(arr, size);
}