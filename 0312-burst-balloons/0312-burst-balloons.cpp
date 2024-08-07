static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int solve(int i,int j,vector<int>&nums,vector<vector<int>>&dp)
    {
        if(i>j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int maxCost=INT_MIN;
        for(int k=i;k<=j;k++)
        {
            int cost=nums[i-1]*nums[k]*nums[j+1]+solve(i,k-1,nums,dp)+solve(k+1,j,nums,dp);
            maxCost=max(maxCost,cost);
        }
        return dp[i][j]=maxCost;
    }
    int maxCoins(vector<int>& nums) 
    {
        int n=nums.size();
        nums.push_back(1);
        nums.insert(nums.begin(),1);
        vector<vector<int>>dp(n+2,vector<int>(n+2,-1));
        return solve(1,n,nums,dp);
    }
};