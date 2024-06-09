class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;
        for (const string &X : operations) {
            if (X == "++X" || X == "X++") ans+=1;
            else ans-=1;
        }
        return ans;
    }
};