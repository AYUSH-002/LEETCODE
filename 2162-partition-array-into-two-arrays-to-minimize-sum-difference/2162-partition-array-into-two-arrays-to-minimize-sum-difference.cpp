static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    const int N = 16;
    vector<int> left[16];
    vector<int> right[16];

    void generate(int ind, vector<int>& nums, int s, int f, int len) {
        if (ind >= nums.size() / 2 + f) {
            if (f == 0) {
                left[len].push_back(s);
            } else {
                right[len].push_back(s);
            }
            return;
        }

        generate(ind + 1, nums, s + nums[ind], f, len + 1);
        generate(ind + 1, nums, s, f, len);
    }

    int minimumDifference(vector<int>& nums) {
        int n = nums.size();
        generate(0, nums, 0, 0, 0);
        generate(n / 2, nums, 0, n / 2, 0);
        int totalsum = accumulate(nums.begin(), nums.end(), 0);
        int ans = 1e9;

        // Sort right subsets once
        for (int len = 1; len <= n / 2; len++) {
            sort(right[len].begin(), right[len].end());
        }

        for (int len = 1; len <= n / 2; len++) {
            for (auto v : left[len]) {
                int val = (totalsum - 2 * v) / 2;
                auto& sum2 = right[n / 2 - len];

                auto it = upper_bound(sum2.begin(), sum2.end(), val);
                if (it != sum2.end()) {
                    int sum = v + *it;
                    ans = min(ans, abs(totalsum - 2 * sum));
                }

                if (it != sum2.begin()) {
                    --it;
                    int sum = v + *it;
                    ans = min(ans, abs(totalsum - 2 * sum));
                }
            }
        }
        return ans;
    }
};