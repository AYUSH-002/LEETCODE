static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,1);
        vector<int>count(n,1);
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j] && dp[j]+1>dp[i])
                {
                    dp[i]=dp[j]+1;
                    count[i]=count[j];
                }
                else if(nums[i]>nums[j] && dp[j]+1==dp[i])
                {
                    count[i]+=count[j];
                }
            }
        }
        int maxSize=*max_element(dp.begin(),dp.end());
        int result=0;
        for(int i=0;i<n;i++)
        {
            if(maxSize==dp[i]) result+=count[i];
        }
        return result;
    }
};