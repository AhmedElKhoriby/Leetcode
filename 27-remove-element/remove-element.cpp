class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        sort(nums.begin(), nums.end());
        int p1 = 0, p2 = nums.size()-1, ctr = 0;
        while (p1 <= p2) {
            int &val1 = nums[p1], &val2 = nums[p2];
            if (val1 == val) {
                swap(nums[p1],  nums[p2]);
                ctr++;
                p2--;
            }
            else p1++;
        }
        return nums.size() - ctr;
    }
};