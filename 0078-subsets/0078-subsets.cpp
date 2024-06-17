static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<int> subset;
    vector<vector<int>> res;

    void dfs(vector<int>& nums, int index) {
        if (index >= nums.size()) {
            res.push_back(subset);
            return;
        }
        subset.push_back(nums[index]);
        dfs(nums, index + 1);

        subset.pop_back();
        dfs(nums, index + 1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        dfs(nums, 0);
        return res;
    }
};