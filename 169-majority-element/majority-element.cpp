class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int, int> mp;
        int sz = nums.size();
        int ret = 0;
        for (int i = 0; i < sz; i++) {
            mp[nums[i]]++;
            ret = (mp[nums[i]] > ret) ? i : ret;
        }
        return nums[ret];
    }
};