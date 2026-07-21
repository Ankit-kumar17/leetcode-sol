// Last updated: 7/21/2026, 4:35:45 PM
class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;

        int prev1 = 2; // ways for n-1
        int prev2 = 1; // ways for n-2

        for (int i = 3; i <= n; i++) {
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
};