class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros = 0, ones = 0, twos = 0;
        for (const int& x : nums)
            if (x == 0)zeros++;
            else if (x == 1)ones++;
            else twos++;
        for (int& x : nums)
            if (zeros-- > 0) x = 0;
            else if (ones-- > 0) x = 1;
            else if (twos-- > 0) x = 2;
    }
};
