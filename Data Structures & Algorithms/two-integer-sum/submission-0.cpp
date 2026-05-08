class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> result;
        for(int i=0; i < (int)nums.size(); i++){
            int req = target - nums[i];
            if(m.count(req)) return {m[req], i};
            m[nums[i]] = i;
        }
        return {};
    }
};
