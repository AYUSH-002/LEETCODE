static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>res;
        for(auto &num:nums)
        {
            res.push_back(pow(num,2));
        } 
        sort(res.begin(),res.end());
        return res;
    }
};