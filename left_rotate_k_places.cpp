// left rotating an array 'arr' of size n k times

#include <bits/stdc++.h>

using namespace std;

void reverse(int arr[], int start, int end)
{
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void rotate(int arr[], int n, int k)
{

    reverse(arr, 0, k - 1);

    reverse(arr, k, n - 1);

    reverse(arr, 0, n - 1);
}

void printlist(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int size;

    cout<<"Enter size of the array:\n";

    cin>>size;

    int arr[size];

    cout<<"Enter in the array:\n";

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int k;

    cout <<"Enter value of k:";
    cin>>k;

    rotate(arr, size, k);

    printlist(arr, size);

    return 0;
}