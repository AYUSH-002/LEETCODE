static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> subSum;
        const int MOD = 1e9 + 7;
        
        for(int i = 0; i < n; ++i) {
            int currentSum = 0;
            for(int j = i; j < n; ++j) {
                currentSum += nums[j];
                subSum.push_back(currentSum);
            }
        }

        sort(subSum.begin(), subSum.end());

        int result = 0;
        for(int i = left - 1; i < right; ++i) {
            result = (result + subSum[i]) % MOD;
        }

        return result;
    }
};
