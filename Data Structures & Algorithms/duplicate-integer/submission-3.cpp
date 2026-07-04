class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(int& num : nums){
            if(!st.insert(num).second) return true;
        }
        return false;
    }
};