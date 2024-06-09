class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int sz = nums.size();
        for (int i = 0; i < 2 * sz; i++) {
            ans.push_back(nums[i % sz]);
        }
        return ans;
    }
};