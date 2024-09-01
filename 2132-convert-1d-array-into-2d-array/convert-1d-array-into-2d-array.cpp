class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int sz = original.size();
        if (m * n != sz) return {};
        vector<vector<int>> output(m, vector<int>(n));
        int cnt = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                output[i][j] = original[cnt++];
            }
        }
        return output;
    }
};