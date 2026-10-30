class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        for(int x : nums) count[x]++;

        vector<vector<int>> buckets(nums.size() + 1);
        for(auto& entry : count){
            buckets[entry.second].push_back(entry.first);
        }

        vector<int> ans;
        int i = nums.size();
        while(ans.size() < k){
            ans.insert(ans.end(), buckets[i].begin(), buckets[i].end());
            i--;
        }   

        return ans;
    }
};
