class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int& num : nums) freq[num]++;

        vector<vector<int>> buckets(nums.size() + 1);
        for(auto& [num, fr] : freq) buckets[fr].push_back(num);

        vector<int> ans;
        for(int i = nums.size(); i > 0; i--){
            for(int& num : buckets[i]){
                if(ans.size() >= k) return ans;
                ans.push_back(num);
            }
        }
        
        return ans;
    }
};
