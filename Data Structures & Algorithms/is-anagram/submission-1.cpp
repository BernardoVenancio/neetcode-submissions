class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        
        int letters[26] = {0};
        for(size_t i = 0; i < s.size(); i++){
            letters[s[i] - 'a']++;
            letters[t[i] - 'a']--;
        }
        for(size_t i = 0; i < 26; i++)
            if(letters[i] != 0) return false;
        return true;
    }
};
