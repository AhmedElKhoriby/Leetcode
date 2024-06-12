class Solution {
public:
    bool isValid(string s) {
        stack <char> stk;
        unordered_map <char, char>mp;
        mp[']'] = '[';
        mp['}'] = '{';
        mp[')'] = '(';
        for (const char& x : s) {
            if (x == '{' || x == '(' || x == '[') {
                stk.push(x);
            }
            else {
                if (!stk.empty() && stk.top() == mp[x])
                    stk.pop();
                else return 0;
            }
        }
        return stk.empty();
    }
};