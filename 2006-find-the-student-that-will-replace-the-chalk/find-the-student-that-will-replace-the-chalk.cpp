class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {

        int sz = chalk.size();
        int sum = 0;

        for (int i = 0; i < sz; i++) {
            sum += chalk[i];
            if (sum == k) {
                if (i + 1 == sz)
                    return 0;
                else
                    return i + 1;
            }
            if (sum > k)
                return i;
        }

        if (k > sum)
            k %= sum;
        for (int i = 0; i < sz; i++) {
            if (k > 0 && k >= chalk[i])
                k -= chalk[i];
            else
                return i;
        }
        return 0;
    }
};