class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for(string s : strs){
            encoded += to_string(s.size()) + "#" + s;
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        for(int i = 0; i < s.size(); i++){
            string shift;
            while(s[i] != '#') shift += s[i++];
            decoded.push_back(s.substr(i + 1, stoi(shift)));
            i += stoi(shift);
        }

        return decoded;
    }
};
