class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> numbers;
        for(int& num : nums){
            if(numbers.find(num) != numbers.end()){
                return true;
            }
            numbers.insert(num);
        }
        return false;
    }
};
