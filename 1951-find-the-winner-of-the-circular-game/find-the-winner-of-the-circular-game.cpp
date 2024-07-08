class Solution {
public:
    int findTheWinner(int n, int k) {
        int ptr = 0;
        for (int i = 1; i <= n; ++i) {
            ptr = (ptr + k) % i;
        }
        return ptr + 1;
    }
};
