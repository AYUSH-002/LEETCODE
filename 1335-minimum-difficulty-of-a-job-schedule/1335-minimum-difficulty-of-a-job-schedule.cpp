class Solution {
public:
    long long func(int ind,int d,int n,vector<int>& jobDifficulty,vector<vector<int>> &dp)
    {
        long long maxi=-1e9;
         if(dp[ind][d]!=-1)
        {
            return dp[ind][d];
        }
        if(d==1)
        {
            for(int i=ind;i<n;i++)
            {
               if(jobDifficulty[i]>maxi)
               {
                   maxi=jobDifficulty[i];
               }
            }
            return maxi;
        }
        long long mini=1e9;
        for(int i=ind;i<n-1;i++)
        {
            if(jobDifficulty[i]>maxi)
            {
              maxi=jobDifficulty[i];
            }
            int val=maxi+func(i+1,d-1,n,jobDifficulty,dp);
            if(val<mini)
            {
                mini=val;
            }
        }
        return dp[ind][d]=mini;
    }
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        int n=jobDifficulty.size();
        if(d>n)
        {
            return -1;
        }
        vector<vector<int>> dp(n+1,vector<int>(d+1,-1));
        return func(0,d,n,jobDifficulty,dp);
    }
};