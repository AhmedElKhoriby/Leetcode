class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0, sz1 = word1.size(), sz2 = word2.size();
        string ans = "";
        while (i < sz1 && i < sz2) {
            ans = ans + word1[i] + word2[i++];
        }
        while (i < sz1) {
            ans += word1[i++];
        }
        while (i < sz2) {
            ans += word2[i++];
        }
        return ans;
    }
};