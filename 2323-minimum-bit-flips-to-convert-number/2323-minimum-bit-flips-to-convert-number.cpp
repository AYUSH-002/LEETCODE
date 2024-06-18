static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int minBitFlips(int start, int goal) {
        start=(start^goal);
        int result = 0;
        while (start) {
            result += (start & 1);
            start = start >> 1;
        }
        return result;
    }
};