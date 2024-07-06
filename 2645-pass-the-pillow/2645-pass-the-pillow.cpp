static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int passThePillow(int n, int time) {
        int N=2*n-2;
        int x=time%N;
        return 1+((x<n) ? x : N-x);
    }
};