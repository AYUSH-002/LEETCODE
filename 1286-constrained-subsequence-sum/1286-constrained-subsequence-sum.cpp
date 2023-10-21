class Solution {
public:
    int constrainedSubsetSum(vector<int>& nums, int k) 
    {
        vector<int>dp(nums);
        deque<int>res;
        res.push_back(0);
        for(int i=1;i<nums.size();i++)
        {
            while(!res.empty() && res.back()<i-k)
            {
                res.pop_back();
            }
            dp[i]=max(dp[i],dp[res.back()]+nums[i]);
            while(!res.empty() && dp[res.front()]<=dp[i])
            {
                res.pop_front();
            }
            res.push_front(i);
        }
        return *max_element(dp.begin(), dp.end());
    }
};