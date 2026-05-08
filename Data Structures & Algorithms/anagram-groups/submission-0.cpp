class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for(string& str : strs){
            string key = str;
            sort(key.begin(), key.end());
            m[key].push_back(str);
        }
        vector<vector<string>> result;
        for(auto& [key, arr] : m){
            result.push_back(arr);
        }
        return result;
    }
};
