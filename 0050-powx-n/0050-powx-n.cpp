static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:

    double myPow(double x,  int n) {

        if(n == 0)
            return 1;
        else if(n < 0)
            return 1 / (x * myPow(x, abs(n) - 1));
        else if(n % 2 == 0)
        {
            double ans = myPow(x, n/2);
            return ans * ans;
        }
        return x * myPow(x, n-1);
        
    }
};