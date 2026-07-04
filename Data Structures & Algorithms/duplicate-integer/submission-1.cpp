class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for(int& num : nums){
            int size = st.size();
            st.insert(num);
            if(st.size() == size) return true;
        }
        return false;
    }
};