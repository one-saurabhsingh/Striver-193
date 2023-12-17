#include <bits/stdc++.h>
int subarraysWithSumK(vector<int> a, int k)
{
    // int XOR =0, count = 0;
    // int n =a.size();
    // for(int i=0; i< a; i++){
    //     for(int j =i; j <n; j++){
    //         for(int k =i; k < j; k++){
    //             XOR = XOR^a[k];
    //             if(XOR == k) count++;
    //         }
    //     }
    // }
    // return count;

    // OPTIMAL SOLUTION

    int xr = 0;
    map<int, int> mpp;
    mpp[xr]++;
    int count = 0;
    for (int i = 0; i < a.size(); i++)
    {
        xr = xr ^ a[i];
        int x = xr ^ k;
        count += mpp[x];
        mpp[xr]++;
    }
    return count;
}