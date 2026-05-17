class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int left = 0;
        int right = n-1;
        int maxi =0;
        int area = 0;
        while(left<right){
            if(heights[left]<heights[right]){
                area = heights[left]*(right-left);
                left++;
            }else{
                area = heights[right]*(right-left);
                right--;
            }
            maxi = max(maxi,area);
        }
    return maxi;
    }
};
