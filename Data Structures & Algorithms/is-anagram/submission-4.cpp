class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        
        int arr[26] = {0};

        for(char& ch : s) arr[ch - 'a']++;
        for(char& ch : t) arr[ch - 'a']--;
        for(int& p : arr) {
            if(p != 0) return false;
        }
        return true;
    }
};
