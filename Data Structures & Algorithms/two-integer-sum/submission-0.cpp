class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> diff;
        for(int i = 0; i < nums.size(); i++){
            if(diff.contains(nums[i])) return{diff[nums[i]], i};
            diff[target - nums[i]] = i;
        }

        return {-1, -1};
    }
};
