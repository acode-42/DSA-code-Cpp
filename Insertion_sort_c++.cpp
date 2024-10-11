#include <iostream>

using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
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

    cout << "Enter Size of the array:\n";
    cin >> size;

    int arr[size];

    cout << "Enter in the array:\n";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Array Before Sorting:\n";
    printList(arr, size);

    insertionSort(arr, size);

    cout << "After Sorting:\n";
    printList(arr, size);
}