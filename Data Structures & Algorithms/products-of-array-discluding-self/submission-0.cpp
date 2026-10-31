class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixProduct(nums.begin(), nums.end());
        vector<int> postfixProduct(nums.begin(), nums.end());

        for(int i = 1; i < n; i++){
            prefixProduct[i] *= prefixProduct[i - 1];
            postfixProduct[(n - 1) - i] *= postfixProduct[(n -1) - i + 1];
        }

        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            int prefix = (i > 0) ? prefixProduct[i - 1] : 1;
            int postfix = (i < n - 1) ? postfixProduct[i + 1] : 1;
            ans.push_back(prefix * postfix);
        }

        return ans;
    }
};
