class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() > haystack.size()) return -1;
        if (needle.size() == haystack.size()) return (haystack == needle ? 0 : -1);
        int i = 0, j = needle.size(),n = haystack.size();
        for (;i+j-1 < n;i++) {
            if (haystack.substr(i, j) == needle)
                return i;
        }
        return -1;
    }
};