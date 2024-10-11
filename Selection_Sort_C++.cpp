// Implementing Selection Sort on an array 'arr' of Size 'n'

#include <iostream>

using namespace std;

void selectionSort(int arr[], int n)
{
    int temp, mini, i, j;

    for (i = 0; i <= n - 2; i++)
    {
        mini = i;
        for (j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }

        temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
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

    cout << "Enter size of the array:";
    cin >> size;

    int arr[size];

    cout << "Enter in array:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Before sorting:\n";
    printList(arr, size);

    selectionSort(arr, size);

    cout << "After Sorting:\n";

    printList(arr, size);

    return 0;
}
