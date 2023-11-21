static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        const int mod = 1e9 + 7;
        int n = nums.size();
        unordered_map<int, int> freq;

        long long res = 0;
        for (int i = 0; i < n; ++i) {
            int diff = nums[i] - reverseInt(nums[i]);
            res = (res + freq[diff]) % mod;
            freq[diff]++;
        }

        return static_cast<int>(res);
    }

private:
    int reverseInt(int number) {
        int rev = 0;
        while (number != 0) {
            rev = rev * 10 + number % 10;
            number /= 10;
        }
        return rev;
    }
};
