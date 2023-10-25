static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int kthGrammar(int n, int k) {
        int res = 0;
        while (n > 1) {
            int mid = pow(2, n-2);
            if (k > mid) {
                k -= mid; 
                res = 1 - res;
            } 
            n--;
        }
        return res;
    }
};