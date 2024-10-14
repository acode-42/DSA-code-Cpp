#include <bits/stdc++.h>

using namespace std;

int secondLargest(int arr[], int n)
{
    int large = INT_MIN, second_large = INT_MIN;
    int i;

    for (i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            second_large = large;
            large = arr[i];
        }

        else if (arr[i] > second_large && arr[i] != large)
        {
            second_large = arr[i];
        }
    }

    return second_large;
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

    cout << "Enter size of array:\n";
    cin >> size;

    int arr[size];

    cout << "Enter in array:\n";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int second=secondLargest(arr, size);

    cout<<"Second largest element is:"<<second;

    return 0;

}