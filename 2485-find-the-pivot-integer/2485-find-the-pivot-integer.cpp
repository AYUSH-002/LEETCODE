static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int pivotInteger(int n) {
        int prefix_sum = 0, sum = 0;
        for(int i=1; i<=n; i++){
            prefix_sum += i;
        }
        for(int i=1; i<=n; i++){
            sum += i;
            if(sum==prefix_sum){
                return i;
            }
            prefix_sum -= i;
        }
        return -1;
    }
};