class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        // unordered_map <int, int> map;
        // for(int i=0; i< nums.size(); i++){
        //     map[nums[i]]++;
        //     if(map[nums[i]] >1){
        //         return nums[i];
        //     }
        // }
        // return -1;

        // Slow and Fast pointer approach
        int slow = nums[0];
        int fast = nums[0];

        do
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        fast = nums[0];
        while (slow != fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};