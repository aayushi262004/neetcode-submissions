class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>stt;
        int n = s.size();
        int left =0;
        int res =0;
        for(int right=0;right<n;right++){
          while(stt.find(s[right]) != stt.end()){
                stt.erase(s[left]);
                left++;
               
        }
        stt.insert(s[right]);
        res = max(res, right-left+1);
        }
    return res;
    }
};
