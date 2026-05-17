class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int left =0;
        int right = left + k-1;
        vector<int>ans;
        while(right<nums.size()){
            int maxi = INT_MIN;
            for(int i=left;i<=right;i++){
                maxi = max(maxi, nums[i]);
            }
            ans.push_back(maxi);
            right++;
            left++;
        }
    return ans;
    }
};
