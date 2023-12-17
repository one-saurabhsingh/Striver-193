class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {

        // sort(nums.begin(), nums.end());
        // int n = nums.size();
        // int lastSmaller = INT_MIN;
        // int count = 0;
        // int longest = 0;
        // for(int i =0; i < n ; i++){
        //     if(nums[i] -1 == lastSmaller){
        //         count += 1;
        //         lastSmaller = nums[i];
        //     }
        //     else if( lastSmaller != nums[i]){
        //         count = 1;
        //         lastSmaller = nums[i];
        //     }
        //         longest = max(longest, count);
        // }
        // return longest;

        // OPTIMAL is under some circumstances only
        int n = nums.size();
        if (n == 0)
        {
            return 0;
        }
        int longest = 0;
        unordered_set<int> st;
        for (int i = 0; i < n; i++)
        {
            st.insert(nums[i]);
        }
        for (auto it : st)
        {
            if (st.find(it - 1) == st.end())
            {
                int count = 1;
                int x = it;
                while (st.find(x + 1) != st.end())
                {
                    x = x + 1;
                    count = count + 1;
                }
                longest = max(longest, count);
            }
        }
        return longest;
    }
};