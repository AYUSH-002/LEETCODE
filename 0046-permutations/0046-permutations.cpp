static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>> res; 
        sort(nums.begin(), nums.end()); 
        do 
        res.push_back(nums); 
        while (next_permutation(nums.begin(), nums.end())); 
        return res;
    }
};