class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;
        for (auto& X : operations) {
            if (X == "++X" || X == "X++") ans++;
            if (X == "--X" || X == "X--") ans--;
        }
        return ans;
    }
};