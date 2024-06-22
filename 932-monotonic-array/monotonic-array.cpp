class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int>_1 = nums;
        sort(_1.begin(), _1.end());
        vector<int>_2 = _1;
        reverse(_2.begin(), _2.end());
        return nums == _1 || nums == _2;
    }
};