class Solution {
public:

    int checkZero(vector<int>& nums){
        int result = -1;
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                count++;
                result = i;
            }
            if(count>1) return -2;
        }
        return result;
    }

    vector<int> productExceptSelf(vector<int>& nums) {
        int zeroStat = checkZero(nums);
        vector<int> result(nums.size()); 

        if(zeroStat == -2) return result;

        if(zeroStat != -1){
            int product = 1;  
            for(int i=0; i<nums.size(); i++){
                if(i != zeroStat) product = product * nums[i];
            }
            result[zeroStat] = product;
            return result;
        }
        else{
            vector<int> left(nums.size());
            vector<int> right(nums.size());
            int product = 1;
            for(int i=0; i<nums.size(); i++){
                left[i] = product;
                product = product * nums[i];
            }
            product = 1;
            for(int i = nums.size() - 1; i>=0; i--){
                right[i] = product;
                product = product * nums[i];
            }
            for(int i=0; i<nums.size(); i++){
                //if(i==0) result[i] = right[i+1];
                //if(i==nums.size()-1) result[i] = left[i-1];
                //else 
                result[i] = left[i] * right[i]; 
            }
        }
        return result;
    }
};
