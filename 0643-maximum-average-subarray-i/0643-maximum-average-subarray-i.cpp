static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 1) return (double) nums[0];

        double sum = 0;
        for (int i = 0; i < k; ++i) {
            sum += nums[i];
        }
        
        double result = sum / k;

        for (int i = k; i < n; ++i) {
            sum += nums[i] - nums[i - k];
            result = max(result, sum / k);
        }

        return result;
    }
};
