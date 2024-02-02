static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<int> sequentialDigits(int low, int high) 
    {
        vector<int> ans;

        for (int i = 1; i <= 9; ++i) {
            int num = i;
            int nextDigit = i + 1;

            while (num <= high && nextDigit <= 9) {
                num = num * 10 + nextDigit;
                if (low <= num && num <= high) ans.push_back(num);
                ++nextDigit;
            }
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};