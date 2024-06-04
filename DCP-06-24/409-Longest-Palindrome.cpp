class Solution {
public:
    int longestPalindrome(string s) {
        
        if (s.size() == 1)
            return 1;

        sort(s.begin(), s.end());

        int sz = s.size(), ctr = 0;
        bool flag = 0;

        for (int i = 1; i < sz; i++) 
            if (s[i] == s[i - 1]) ctr++, i++;
            else flag = 1;

        ctr = ctr * 2;
        if (flag || sz % 2 != 0)
            ctr++;

        return ctr;
    }
};