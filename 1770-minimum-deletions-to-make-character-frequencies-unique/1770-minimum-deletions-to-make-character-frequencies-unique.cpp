class Solution {
public:
    int minDeletions(string s) 
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
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