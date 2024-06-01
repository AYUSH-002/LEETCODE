static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public: 
    int mod = int(1e9 + 7);

    int solve(int curr,int n,int k,int target,int sum,vector<vector<int>>&dp)
    {
        if(sum>target) return 0;
        if(sum==target && curr==n+1) return 1;
        if(curr>n) return 0;
        if(dp[curr][sum]!=-1) return dp[curr][sum];
        int newSum=0;
        for(int i=1;i<=k;i++)
        {
            if(sum+i<=target)
            {
                newSum=(newSum+solve(curr+1,n,k,target,sum+i,dp))%mod;
            }
            else break;
        }
        return dp[curr][sum]=newSum;
    }
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> dp(n+1, vector<int>(target+1,-1));
        return solve(1,n,k,target,0,dp);
    }
};