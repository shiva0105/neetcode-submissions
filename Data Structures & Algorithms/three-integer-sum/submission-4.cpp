class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        int lim = 0;

        for(int i=0; i<nums.size(); i++){
            lim = i;
            if(nums[i]>=0){
                break;
            }
        }

        for(int i=0; i<=lim; i++){
            if(nums[i]>0) break;
            if(i>0 && nums[i]==nums[i-1]) continue;
            int num = nums[i];
            int l=i+1; int r = nums.size()-1;
            while(l<r){
                int currSum = num + nums[l] + nums[r];
                if(currSum < 0) l++;
                else if(currSum > 0) r--;
                else{
                    result.push_back({num, nums[l], nums[r]});
                    l++; r--;
                    while(l<r && nums[l]==nums[l-1]) l++;
                }
            }
        }
        return result;
    }
};
