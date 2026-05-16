class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int  i = 0;
        int j = n-1;
        vector<int>vec;
        while(i<j){
            int sum = numbers[i]+numbers[j];
            if(sum == target){
                vec.push_back(i+1);
                vec.push_back(j+1);
                return vec;
            }
            if(sum>target){
                j--;
            }
            if(sum<target){
                i++;
            }
        }
    return vec;
    }
};
