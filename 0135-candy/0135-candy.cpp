class Solution {
public:
    int candy(vector<int>& ratings)
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        int n=ratings.size();
        vector<int>dp(n,1);
        for(int i=1;i<n;i++)
        {
            if(ratings[i]>ratings[i-1])
            {
                dp[i]=dp[i-1]+1;
            }
        }
        for(int i=n-2;i>=0;i--)
        {
            if(ratings[i+1]<ratings[i] && dp[i]<=dp[i+1])
            {
                dp[i]=dp[i+1]+1; 
            }
        }
        int res=0;
        for(int i=0;i<n;i++)
        {
           res+=dp[i];
        }
        return res;

    }
};