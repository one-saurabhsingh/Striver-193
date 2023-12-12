#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector<int> a)
{
    // We still need to optimise this code to make it fully working.
    // unordered_map<int,int> mpp;
    // int sum=0;
    // int len=0;
    // for(int i=0;i<arr.size();i++){
    //   sum+=arr[i];
    //   if(sum==0){ // if there was any target K then sum == k.
    //     len=max(len,i+1);
    //   }
    //   int rem=sum; // rem = sum - k.
    //   if(mpp.find(rem)!=mpp.end()){
    //     len=max(len,i-mpp[rem]);
    //   }
    //   if(mpp.find(sum)==mpp.end()){
    //     mpp[sum]=i;
    //   }
    // }
    // return len;

    // <--------OPTIMISED 2 POINTER APPROACH ---------->
    int left = 0, right = 0;
    long long sum = a[0];
    int maxLen = 0;
    int n = a.size();
    while (right < n)
    {
        while (left <= right && sum > 0)
        {
            sum -= a[left];
            left++;
        }
        if (sum == 0)
        { // here K is 0.
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if (right < n)
            sum += a[right];
    }
    return maxLen;
}