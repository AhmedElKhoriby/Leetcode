class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int sum = 0;
        unordered_map<int, int> remainderMap;
        remainderMap[0] = -1; // Handle edge case where the subarray starts from the beginning
        
        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
            int remainder = sum % k;
            if (remainderMap.find(remainder) != remainderMap.end()) {
                if (i - remainderMap[remainder] > 1) { // Ensure the subarray length is at least 2
                    return true;
                }
            } else {
                remainderMap[remainder] = i;
            }
        }
        return false;
    }
};
