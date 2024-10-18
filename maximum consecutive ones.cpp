//Program to find maximum consecutive ones in an  array

#include <bits/stdc++.h>

using namespace std;

int maxConsecutiveOnes(vector<int> &arr)
{
    int count = 0;
    int maxn = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }

        maxn = max(maxn, count);
    }

    return maxn;
}

int main()
{
    int size;

    cout << "Enter size of array:\n";
    cin >> size;

    vector<int> arr(size);

    cout << "Enter in the array:\n";

    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int one = maxConsecutiveOnes(arr);

    cout << "Max consecutive ones is :" << one;

    return 0;
}