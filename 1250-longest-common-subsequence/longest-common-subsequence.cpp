
class Solution {
public:

	string word1, word2;
	vector<vector<int>> dp;

	int LCS(int i, int j) {

		if (i >= word1.size() || j >= word2.size()) return 0;

		int& ret = dp[i][j];
		if (ret != -1) return ret;


        if (word1[i] == word2[j])
			return ret = 1 + LCS(i + 1, j + 1);
		
		int leave_l = LCS(i + 1, j);
		int leave_r = LCS(i, j + 1);

		return ret = max(leave_l, leave_r);
	}

	int longestCommonSubsequence(string text1, string text2) {
		word1 = text1, word2 = text2;
		dp.assign(word1.size(), vector<int>(word2.size(), -1));

		return LCS(0, 0);
	}
};