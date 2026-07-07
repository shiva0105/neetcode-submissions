class Solution {
public:
    string freqKey (string str) {
        vector<int> count(26,0);
        for(char& ch : str) count[ch - 'a']++;
        string key = "";
        //for(int& c : count) key += ',' + to_string(c);
        for(int i=0; i<26; i++) key += ',' + count[i];
        return key;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> result;
        for(string& str : strs) mp[freqKey(str)].push_back(str);
        for(auto& p : mp) result.push_back(p.second);
        return result;
    }
};
