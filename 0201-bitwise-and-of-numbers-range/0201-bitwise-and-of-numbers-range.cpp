static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
        int res=0;
        while(left!=right)
        {
            left>>=1;
            right>>=1;
            res++;
        }
        return left<<res;
    }
};