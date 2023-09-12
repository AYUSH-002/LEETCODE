class Solution {
public:
    int minDeletions(string s) 
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        // unordered_map<char,int>umap;
        // vector<int>res;
        // int ans=0;
        // int n=s.size();
        // for(char& c:s)
        // {
        //     umap[c]++;
        // }
        // for(auto& x:umap)
        // {
        //     res.push_back(x.second);
        // }
        // sort(res.rbegin(),res.rend());
        // for(int i=1;i<res.size();i++)
        // {
        //     while(res[i]>=res[i-1] && res[i]>0)
        //     {
        //         ans++;
        //         res[i]--;
        //     }
        // }
        // return ans;
       vector<int>ans(26);
       int n=s.size();
       int res=0;
       for(const char& c:s)
       {
           ans[c-'a']++;
       }
       sort(ans.rbegin(),ans.rend());
       for(int i=1;i<26;i++)
       {
           while(ans[i]>=ans[i-1] && ans[i]>0)
           {
               ans[i]--;
               res++;
           }
       }
       return res;
    }
};