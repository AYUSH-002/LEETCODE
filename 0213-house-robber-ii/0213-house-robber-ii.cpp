class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();

        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);
        vector<int>dp(n-1,-1);
        vector<int>dp1(n-1,1);

        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);

        for(int i=2;i<n-1;i++)
        {
            dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }

        dp1[0]=nums[1];
        dp1[1]=max(nums[1],nums[2]);

        for(int i=3;i<n;i++)
        {
            dp1[i-1]=max(nums[i]+dp1[i-3],dp1[i-2]);
        }

        return max(dp.back(),dp1.back());
    }
};