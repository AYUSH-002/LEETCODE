static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int dp[2001][2001];
    int result(vector<int>& nums,int i,int j,int sum)
    {
        if(i>=j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int res=0,res1=0,res2=0;
        if(nums[i]+nums[i+1]==sum||sum==-1)
        {
            res=result(nums,i+2,j,nums[i]+nums[i+1])+1;
        }
        if(nums[j]+nums[j-1]==sum||sum==-1)
        {
            res2=result(nums,i,j-2,nums[j]+nums[j-1])+1;
        }
        if(nums[i]+nums[j]==sum||sum==-1)
        {
            res1=result(nums,i+1,j-1,nums[i]+nums[j])+1;
        }
        return dp[i][j]=max(res,max(res1,res2));
    }
    int maxOperations(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int n=nums.size();
        return result(nums,0,n-1,-1);
    }
};