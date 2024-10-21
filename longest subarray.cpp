#include <bits/stdc++.h>

using namespace std;

int longestSubArray(vector<int> &arr, long long k)
{
    int n = arr.size();

    int l = 0, r = 0;

    long long sum = arr[0];

    int maxlen = 0;

    while (r < n)
    {
        while (l <= r && sum > k)
        {
            sum -= arr[l];
            l++;
        }

        if (sum == k)
        {
            maxlen = max(maxlen, r - l + 1);
        }
        r++;

        if (r < n)
            sum += arr[r];
    }

    return maxlen;
}

int main(){
    vector <int> arr={1,2,5,4,7,8};

    long long k=9;

    int result=longestSubArray(arr, k);

    cout<<"Length of the subarray is:"<<result<<endl;

    return 0;
}