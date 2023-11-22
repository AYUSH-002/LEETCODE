static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        map<int,vector<int>>ans;
        int n=nums.size();//rows
        vector<int>res;
        for(int i=0;i<n;i++)
        {
            int m=nums[i].size();
            for(int j=0;j<m;j++)
            {
                ans[i+j].push_back(nums[i][j]);
            }
        }
        for(auto& x:ans)
        {
            int m=x.second.size();
            for(int i=m-1;i>=0;i--)
            {
                res.push_back(x.second[i]);
            }
        }
        return res;
    }
};