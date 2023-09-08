class Solution {
public:
    vector<vector<int>> generate(int n) 
    {
        ios::sync_with_stdio(0); cin.tie(0);
        vector<vector<int>>ans;
        for(int i=0;i<n;i++)
        {   
            ans.push_back(vector<int>(i+1,1));
        }
        for(int i=2;i<n;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(j<i)
                {
                    ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
                }
            }
        }
        return ans;
    }
};