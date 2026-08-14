class Solution {
public:
    int fib(int n) {
        int sum =0;
        if(n<2)sum=+n;
        else
            sum=fib(n-1)+fib(n-2);
        return sum;
    }
};