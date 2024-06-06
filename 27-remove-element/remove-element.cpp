class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0,sz = nums.size();
        for (int i = 0; i < sz;i++)
            if (nums[i] != val)
                nums[k++] = nums[i];
        return k;
    }
};