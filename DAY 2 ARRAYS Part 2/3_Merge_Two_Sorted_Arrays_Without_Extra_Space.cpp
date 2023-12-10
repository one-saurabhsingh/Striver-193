class Solution
{
    // OPTIMAL 2 Approach
    // private:
    // void swapIfGreater(vector<int>& arr1, vector<int>& arr2, int ind1, int ind2){
    //     if(arr1[ind1]> arr2[ind2]){
    //         swap(arr1[ind1], arr2[ind2]);
    //     }
    // }
public:
    void merge(vector<int> &arr1, int n, vector<int> &arr2, int m)
    {
        long long arr3[n + m];
        int left = 0;
        int right = 0;
        int index = 0;

        while (left < n && right < m)
        {
            if (arr1[left] <= arr2[right])
            {
                arr3[index] = arr1[left];
                left++, index++;
            }
            else
            {
                arr3[index] = arr2[right];
                right++, index++;
            }
        }
        while (left < n)
        {
            arr3[index++] = arr1[left++];
        }
        while (right < m)
        {
            arr3[index++] = arr2[right++];
        }

        for (int i = 0; i < n + m; i++)
        {
            // if(i < n){               // Don,t do this as leetcode is asking for array 1 only
            //     arr1[i] = arr3[i];
            // }
            // else{
            //     arr2[i-n] = arr3[i];
            // }
            arr1[i] = arr3[i]; // Did this according to leetcode, setting everything in
        }                      // array 1 only.

        // <---------OPTIMAL 1 Approach----------------------------------------------------->

        //  Would not work as it only needs array 1 as its solution.
        // int left = n-1; int right =0;
        // while(left >=0 && right < m){
        //         if(arr1[left] > arr2[right]){
        //             swap(arr1[left], arr2[right]);
        //             left--, right++;
        //         }
        //         else{
        //             break;
        //         }
        //     }
        //     sort(arr1.begin(), arr1.end());
        //     sort(arr2.begin(), arr2.end());

        // <--------OPTIMAL 2 Approach------------------------------------------------------>

        // Using Gap method
        // int len = (n+m);
        // int gap = (len/2) + (len%2);
        // while(gap > 0){
        //     int left = 0;
        //     int right = left + gap;
        //     while(right < len){
        //         // arr1 and arr2
        //         if(left < n && right >= n){
        //             swapIfGreater(arr1, arr2, left, right - n);
        //         }
        //         // arr2 and arr2
        //         else if(left >= n){
        //             swapIfGreater(arr1, arr2, left-n, right - n);
        //         }
        //         // arr1 and arr1
        //         else{
        //             swapIfGreater(arr1, arr2, left, right);
        //         }
        //         left++, right++;
        //     }
        //     if(gap == 1) break;
        //     gap = (gap/2) + (gap%2);
        // }
    }
};