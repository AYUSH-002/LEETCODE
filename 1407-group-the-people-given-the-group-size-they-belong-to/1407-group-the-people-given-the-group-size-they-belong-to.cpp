class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) 
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        vector<vector<int>>ans;
        int n=groupSizes.size();
        unordered_map<int,int>umap;
        for(auto& x:groupSizes)
        {
            umap[x]++;
        }
        for(auto& x:umap)
        {
            int i=0;
            vector<int>res;
            while(res.size()<x.second && i<n)
            {
                if(x.first==groupSizes[i])
                {
                    res.push_back(i);
                }
                i++;
            }
            if(x.first!=x.second)
            {
                int p=x.second/x.first;
                while(p>0)
                {
                    vector<int>a;
                    while(a.size()<x.first)
                    {
                        a.push_back(res.back());
                        res.pop_back();
                    }
                    ans.push_back(a);
                    p--; 
                }
            }
            else
            {
            ans.push_back(res);
            }
        }
        return ans;
    }
};