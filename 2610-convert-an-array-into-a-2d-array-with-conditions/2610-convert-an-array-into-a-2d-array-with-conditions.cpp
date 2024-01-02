static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> umap;
        int n = nums.size();
        for (const auto& x : nums) {
            umap[x]++;
        }
        int maxFreq = 0;
        for (const auto& x : umap) {
            maxFreq = max(maxFreq, x.second);
        }
        vector<vector<int>> res(maxFreq);
        for (int i = 0; i < maxFreq; ++i) {
            for (auto& x : umap) {
                if (x.second > 0) {
                    res[i].push_back(x.first);
                    x.second--;
                }
            }
            sort(res[i].begin(), res[i].end(), greater<int>());
        }

        return res;
    }
};