static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        for (int i = 1; i < nums.size() - 1;) {
            if (nums[i - 1] + nums[i + 1] == nums[i] + nums[i]) {
                swap(nums[i], nums[i + 1]);
                if (i > 1) {
                    i--;
                }
            } else {
                i++;
            }
        }
        return nums;
    }
};