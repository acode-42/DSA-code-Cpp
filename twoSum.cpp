#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int> &arr, int n, int target)
{
    unordered_map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int more = target - num;
        if (mpp.find(more) != mpp.end())
        {
            return {mpp[more], i};
        }
        mpp[num] = i;
    }
    return {-1, -1};
}

int main()
{
    int n = 6;

    vector<int> arr = {1, 2, 5, 6, 3, 3};

    int target = 6;

    vector<int> ans = twoSum(arr, n, target);

    cout << "Answer is: [" << ans[0] << ", "
         << ans[1] << "]" << endl;

    return 0;
}