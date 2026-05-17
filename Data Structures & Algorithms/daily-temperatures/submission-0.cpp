class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        int n = temperatures.size();

        vector<int> res(n,0);

        for(int i = 0; i < n; i++) {

            int cnt = 0;

            for(int j = i + 1; j < n; j++) {

                cnt++;

                if(temperatures[j] > temperatures[i]) {

                    res[i] = cnt;

                    break;
                }
            }
        }

        return res;
    }
};