#include <bits/stdc++.h>
using namespace std;

pair<int, int> missingAndRepeating(vector<int> &a, int n)
{
    // Write your code here .
    // int Missing, Repeating;

    // // To mark visited elements
    // for(int i= 0; i< n; i++){
    //     int index = abs(arr[i]) -1;
    //     if(arr[index] >0){
    //         arr[index] = -arr[index];
    //     } else{
    //         Repeating = index + 1;
    //     }
    // }
    // // To find missing and repeating numbers
    // for(int i =0; i< n; i++){
    //     if(arr[i] > 0){
    //         Missing = i+1;
    //         break;
    //     }
    // }

    // return {Missing, Repeating};

    // MATHEMATICAL APPROACH (Natural Numbers Summation)

    long long r = a.size();
    long long SN = (r * (r + 1)) / 2;                // We need to find out S - S2 and S + S2.
    long long S2N = (r * (r + 1) * (2 * r + 1)) / 6; // Where S and S2 are repeating and missing numbers.

    long long S = 0, S2 = 0;

    for (int i = 0; i < r; i++)
    {
        S += a[i];
        S2 += (long long)a[i] * (long long)a[i];
    }
    int val1 = S - SN; // x - y
    int val2 = S2 - S2N;
    val2 = val2 / val1; // x + y
    long long x = (val1 + val2) / 2;
    long long y = x - val1;

    return {(int)y, (int)x};

    // Try XOR method on your own.
}
