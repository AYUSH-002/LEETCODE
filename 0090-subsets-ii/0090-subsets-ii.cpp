static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<int> subset;
    set<vector<int>> res;

    void dfs(vector<int>& nums, int index) {
        if (index >= nums.size()) {
            res.insert(subset);
            return;
        }
        subset.push_back(nums[index]);
        dfs(nums, index + 1);

        subset.pop_back();
        dfs(nums, index + 1);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        dfs(nums, 0);
        vector<vector<int>> result;
        for (const auto& vec : res) {
            result.push_back(vec);
        }
        return result;
    }
};