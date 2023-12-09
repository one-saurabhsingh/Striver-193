class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        // Using STL
        // next_permutation(nums.begin(), nums.end());

        int n = nums.size(); // size of array
        int ind = -1;        // break point
        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                ind = i; // index i is the breaking point
                break;
            }
        }
        if (ind == -1)
        {                                      // if break point does not exist
            reverse(nums.begin(), nums.end()); // then reverse whole array
            return;
        }
        // to find next greater element
        // and swap it with nums[ind]
        for (int i = n - 1; i > ind; i--)
        {
            if (nums[i] > nums[ind])
            {
                swap(nums[i], nums[ind]);
                break;
            }
        }
        // reverse the right half
        reverse(nums.begin() + ind + 1, nums.end());
    }
};