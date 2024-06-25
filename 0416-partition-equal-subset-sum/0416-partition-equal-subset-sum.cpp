static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    bool isSubsetSum(vector<int>arr, int sum){
        int n=arr.size();
        vector<vector<bool>>dp(n+1,vector<bool>(sum+1,false));
        for(int i=0;i<sum+1;i++)
        {
            dp[0][i]=false;
        }
        for(int i=0;i<n+1;i++)
        {
            dp[i][0]=true;
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<sum+1;j++)
            {
                if(arr[i-1]<=j)
                {
                    dp[i][j]=(dp[i-1][j] || dp[i-1][j-arr[i-1]]);
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
    }
    bool canPartition(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum%2!=0)
        {
            return false;
        }
        return isSubsetSum(nums,sum/2);
    }
};