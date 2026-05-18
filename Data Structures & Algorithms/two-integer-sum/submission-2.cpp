class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        vector<int>res;
        for(int i=0;i<n;i++){
            int diff = target - nums[i];
            if(mpp.find(diff) == mpp.end()){
                mpp[nums[i]]=i;
            }else{
                res.push_back(mpp[diff]);
                res.push_back(i);
            }
        }
    return res;
    }
};
