static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int result(int index,vector<int>& arr, int k,vector<int>&dp)
    {
        int n=arr.size();
        if(index==n) return 0;
        if(dp[index]!=-1) return dp[index];
        int len=0;
        int maxi=INT_MIN,maxSum=INT_MIN;
        for(int i=index;i< min(n,index+k);i++)
        {
            len++;
            maxi=max(maxi,arr[i]);
            int sum=len*maxi+result(i+1,arr,k,dp);
            maxSum=max(maxSum,sum);
        }
        return dp[index]=maxSum;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int>dp(n,-1);
        return result(0,arr,k,dp);
    }
};