class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result = {0, 0};

        int l = 0; int r = numbers.size() - 1;

        while(l < r) {
            int currSum = numbers[l] + numbers[r];
            if(currSum > target) r-- ;
            else if (currSum < target) l++ ;
            else {
                result[0] = l+1;
                result[1] = r+1;
                break;
            }
        }

        return result;
    }
};
