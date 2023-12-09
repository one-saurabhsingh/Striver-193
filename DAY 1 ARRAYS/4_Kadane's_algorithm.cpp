class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = 0, maxi = INT_MIN;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            sum += nums[i]; // updating sum.

            if (sum > maxi)
            { // comparing sum with maximum.
                maxi = sum;
            }
            if (sum < 0)
            { // keeping lowest value as 0.
                sum = 0;
            }
        }
        return maxi;
    }
};