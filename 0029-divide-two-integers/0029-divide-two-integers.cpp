class Solution {
public:
    int divide(int dividend, int divisor) {
        unsigned int ans = 0;
        if (dividend == INT_MIN && divisor == 1)
            return INT_MIN;
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        if (dividend == INT_MAX && divisor == 1)
            return INT_MAX;
        if (dividend == INT_MAX && divisor == -1)
            return -INT_MAX;    
        unsigned int dd = abs(dividend);
        unsigned int dv = abs(divisor);
        while (dd != 0 && dd >= dv) {
            dd -= dv;
            ans++;
        }
        if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)) {
            return -ans;
        }
        return ans;
    }
};