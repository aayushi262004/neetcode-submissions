class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size() == 0) return 0;

        set<int> stt;

        for(int x : nums){
            stt.insert(x);
        }

        vector<int> arr(stt.begin(), stt.end());

        int cnt = 1;
        int maxi = 1;

        for(int i = 1; i < arr.size(); i++){

            if(arr[i] - arr[i-1] == 1){
                cnt++;
            }
            else{
                maxi = max(maxi, cnt);
                cnt = 1;
            }
        }

        maxi = max(maxi, cnt);

        return maxi;
    }
};