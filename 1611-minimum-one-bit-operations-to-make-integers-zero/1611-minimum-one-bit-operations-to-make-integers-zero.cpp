static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int minimumOneBitOperations(int n) {
        bitset<32> a(n);
        int cnt=0;
        for(int i=0; i<32; i++){
            if(a[i]==1){
                cnt=((1<<(i+1))-1)-cnt;
            }
        }
        return cnt;
    }
};