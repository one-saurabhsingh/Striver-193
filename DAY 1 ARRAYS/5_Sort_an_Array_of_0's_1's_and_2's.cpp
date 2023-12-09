class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int i = 0, j = 0, k = nums.size() - 1; // size of array
        while (j <= k)
        {
            if (nums[j] == 0)
            {
                swap(nums[i], nums[j]); // sorting 0
                i++;
                j++;
            }
            else if (nums[j] == 1)
            { // sorting 1

                j++;
            }
            else
            {
                swap(nums[j], nums[k]); // sorting 2

                k--;
            }
        }

        // int cnt0 = 0, cnt1 =0, cnt2 =0;
        // for(int i=0; i< nums.size(); i++){
        //     if(nums[i]==0){
        //         cnt0++;
        //     }
        //     else if (nums[i]==1){
        //         cnt1++;
        //     }
        //     else {
        //         cnt2++;
        //     }
        // };
        // for(int i=0; i <cnt0 ; i++){
        //     nums[i] = 0;
        // };
        // for(int i=cnt0; i <cnt1 ; i++){
        //     nums[i] = 1;
        // };
        // for(int i=cnt1; i <nums.size() ; i++){
        //     nums[i] = 2;
        // };
    }
};