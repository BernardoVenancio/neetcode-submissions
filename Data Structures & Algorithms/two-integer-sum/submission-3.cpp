class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> diff;
        for(int i = 0; i < nums.size(); i++){
            auto it = diff.find(nums[i]);
            if(it != diff.end()) return{it->second, i};
            diff[target - nums[i]] = i;
        }

        return {};
    }
};
