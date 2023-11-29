static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res=0;
        while(n!=0)
        {
            int m=n%2;
            if(m==1)
            {
                res++;
            }
            n=n/2;
        }
        return res;
    }
};