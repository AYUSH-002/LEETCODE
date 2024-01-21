class Solution {
public:
    int rob(vector<int>& nums) 
    {
        ios::sync_with_stdio(0); cin.tie(0);
        int n=nums.size();
        vector<int>dp(n);
        if (nums.empty())
        return 0;
        if (nums.size() == 1)
        return nums[0];
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++)
        {
            dp[i]=max(dp[i-2]+nums[i],dp[i-1]);
        }
        return dp.back();
    }
};