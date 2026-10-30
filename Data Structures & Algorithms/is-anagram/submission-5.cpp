class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        
        vector<int> alphabet(26, 0);
        for(char c: s) alphabet[c - 'a']++;
        for(char c : t) alphabet[c - 'a']--;
        for(int x : alphabet) if(x != 0) return false;
        return true;
    }
};
