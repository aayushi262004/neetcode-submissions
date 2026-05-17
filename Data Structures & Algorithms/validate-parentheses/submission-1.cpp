class Solution {
public:
    bool isValid(string s) {

        stack<char> stk;

        for(int i = 0; i < s.size(); i++) {

            if(s[i] == '[')
                stk.push(']');

            else if(s[i] == '{')
                stk.push('}');

            else if(s[i] == '(')
                stk.push(')');

            else {

                if(!stk.empty() && s[i] == stk.top()) {
                    stk.pop();
                }
                else {
                    return false;
                }
            }
        }

        return stk.empty();
    }
};