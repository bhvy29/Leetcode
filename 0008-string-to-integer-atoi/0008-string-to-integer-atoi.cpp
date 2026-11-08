class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.length();

        // 1. Skip leading whitespaces
        while (i < n && s[i] == ' ') {
            i++;
        }

        // 2. Check sign
        int sign = 1;

        if (i < n && s[i] == '-') {
            sign = -1;
            i++;
        }
        else if (i < n && s[i] == '+') {
            i++;
        }

        // 3. Convert digits
        long long num = 0;

        while (i < n && s[i] >= '0' && s[i] <= '9') {
            num = num * 10 + (s[i] - '0');

            // 4. Check overflow
            if (num > INT_MAX) {
                if (sign == 1) return INT_MAX;
                else return INT_MIN;
            }

            i++;
        }

        return (int)(num * sign);
    }
};