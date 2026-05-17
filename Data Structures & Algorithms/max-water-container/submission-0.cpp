class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = 0;
        int l=0; int r = heights.size()-1;

        while(l<r){
            int area = min(heights[l], heights[r]) * (r-l);
            ans = max(ans, area);
            int move_index = heights[r] < heights[l] ? r-- : l++ ;
        }

        return ans;
    }
};
