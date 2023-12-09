#include <bits/stdc++.h>
class Solution
{
public:
    void setZeroes(vector<vector<int>> &arr)
    {
        int n = arr.size();
        int m = arr[0].size();
        // // int col[m] = {0};
        // vector<int> col(m,0);
        // // int row[n] = {0};
        // vector<int> row(n,0);
        // for(int i =0; i< n; i++){
        //     for(int j =0; j< m ; j++){
        //         if(arr[i][j] == 0){
        //             row[i] = 1;
        //             col[j] =1;
        //         }
        //     }
        // }
        // for(int i=0; i<n ; i++){
        //     for(int j=0; j<m ;j++){
        //         if(row[i] || col[j]){
        //             arr[i][j] = 0;
        //         }
        //     }
        // }

        int col0 = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == 0)
                {
                    // mark the i-th row
                    arr[i][0] = 0;
                    // mark the j-th row
                    if (j != 0)
                    {
                        arr[0][j] = 0;
                    }
                    else
                    {
                        col0 = 0;
                    }
                }
            }
        }

        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (arr[i][j] != 0)
                {
                    // check for col and row
                    if (arr[i][0] == 0 || arr[0][j] == 0)
                    {
                        arr[i][j] == 0;
                    }
                }
            }
        }
        if (arr[0][0] == 0)
        {
            for (int j = 0; j < m; j++)
            {
                arr[0][j] = 0;
            }
        }
        if (col0 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                arr[i][0] = 0;
            }
        }
    }
};