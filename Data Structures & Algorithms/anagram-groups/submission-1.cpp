class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> anagrams;
        for(string s : strs){
            vector<int> alphabet(26,0);
            for(char c : s) alphabet[c - 'a']++;
            anagrams[alphabet].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto& entry : anagrams) ans.push_back(entry.second);

        return ans;
    }
};
