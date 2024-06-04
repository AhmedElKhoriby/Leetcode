class Solution {
public:
    int appendCharacters(string s, string t) {   
        int ps = 0, pt = 0;
        while (ps < s.size() && pt < t.size())
            if(s[ps++] == t[pt])pt++;
        return t.size() - pt;
    }
};