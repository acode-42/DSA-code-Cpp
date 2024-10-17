// Find missing number in array
//Using XOR approach

#include <bits/stdc++.h>

using namespace std;

int missingNumber(vector<int> arr, int n)
{
    int xor1 = 0, xor2 = 0;

    for (int i = 0; i < n - 1; i++)
    {
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i + 1);
    }

    xor1 = xor1 ^ n;

    return xor1 ^ xor2;
}

int main()
{
    int size = 5;
    vector<int> arr = {1, 2, 3, 5};
    int ans = missingNumber(arr, size);
    cout << "The missing number is: " << ans << endl;
    return 0;
}
