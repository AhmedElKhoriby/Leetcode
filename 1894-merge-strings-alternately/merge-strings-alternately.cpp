class Solution {
public:
    string mergeAlternately(string word1, string word2) {
    int m = word1.size(), n = word2.size(),sz = (m>n)?n:m;
    int p1 = 0, p2 = 0;
    string ans = "";
    while (p1<m&&p2<n)
        ans += word1[p1++],ans += word2[p2++];
    while (p1 < m)
        ans += word1[p1++];
    while (p2 < n)
        ans += word2[p2++];
    return ans;
}
};