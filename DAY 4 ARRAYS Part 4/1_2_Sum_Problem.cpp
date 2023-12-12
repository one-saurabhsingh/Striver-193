class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        // OPTIMAL
        // sort(nums.begin(), nums.end());
        // int n = nums.size();
        //  int left =0, right =n-1;
        //  while( left <right){
        //      int sum = nums[left] + nums[right];
        //      if(sum == target){
        //          return {left, right};
        //      }
        //      else if(sum < target){
        //          left++;
        //      }
        //      else{
        //          right--;
        //      }
        //  }
        //  return {-1, -1};

        // BETTER APPROACH
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
        {
            int a = nums[i];
            int complement = target - a;
            if (map.find(complement) != map.end())
            {
                return {map[complement], i};
            }
            map[a] = i;
        }
        return {-1, -1};

        // BRUTE FORCE
        // int arr[2] = {0};
        // for(int i =0; i < nums.size()-1; i++){
        //     for(int j =i+1; j <nums.size(); j++){
        //         if(arr[i]+ arr[j] == target){
        //          return {i,j};
        //         }
        //     }
        // }
    }
};