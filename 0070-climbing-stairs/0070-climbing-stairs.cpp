class Solution {
public:
    int climbStairs(int n) {
        int sum = 0;

        if(n == 0) return 0;
        else if(n == 1 || n == 2 || n == 3) return n;

        int a = 2;
        int b = 3;

        for(int i = 4; i <= n; i++) {
            sum = a + b;
            a = b;
            b = sum;
        }

        return sum;
    }
};