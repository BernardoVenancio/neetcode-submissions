class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> unique;
        for(int x : nums){
            if(!unique.insert(x).second) return true;
        }

        return false;
    }
};