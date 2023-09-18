class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) 
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        int n=mat.size();
        int m=mat[0].size();
        vector<int>res;
        for(int i=0;i<n;i++)
        {
            int a=0;
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==1)
                {
                    a++;
                }
            }
            res.push_back(a);
        }
        vector<int>ans=res;
        vector<int>pes;
        sort(ans.begin(),ans.end());
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(pes.size()<k && ans[i]==res[j])
                {
                    int flag=0;
                    for(int k=0;k<pes.size();k++)
                    {
                        if(pes[k]==j)
                        {
                            flag=-1;
                        }
                    }
                    if(flag==0)
                    {
                        pes.push_back(j);
                    }
                }
            }
        }
        return pes;
    }
};