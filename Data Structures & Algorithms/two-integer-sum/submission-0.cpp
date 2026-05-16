class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        vector<int>vec;
        for(int i=0;i<nums.size();i++){
            int val = target - nums[i];
            if(mpp.find(val) != mpp.end()){
                vec.push_back(mpp[val]);
                vec.push_back(i);
            }else{
                mpp[nums[i]]= i;
            }
        }
    return vec;
    }
};
