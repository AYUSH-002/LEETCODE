static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int solve(int index,vector<int>& arr,int k,vector<int>&dp)
    {
        int n=arr.size();
        if(index==n) return 0;
        if(dp[index]!=-1) return dp[index];
        int currLen=0;
        int maxSum=INT_MIN,currMax=INT_MIN;
        for(int i=index;i<min(n,index+k);i++)
        {
            currLen++;
            currMax=max(currMax,arr[i]);
            int sum=currLen*currMax+solve(i+1,arr,k,dp);
            maxSum=max(maxSum,sum);
        }
        return dp[index]=maxSum;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int>dp(n,-1);
        return solve(0,arr,k,dp);
    }
};