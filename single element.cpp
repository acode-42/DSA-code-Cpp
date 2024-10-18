//Finding single element in an array

#include <bits/stdc++.h>

using namespace std;

int singleElement(vector<int> &arr)
{
    int n = arr.size();
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 3, 5, 4, 4};

    int sol = singleElement(arr);

    cout << "Single Element is:" << sol << endl;

    return 0;
}