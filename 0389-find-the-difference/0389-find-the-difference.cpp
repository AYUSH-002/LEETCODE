class Solution {
public:
    char findTheDifference(string s, string t)
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        char ans;
        int n=s.size();
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(t[i]!=s[i])
            {
                ans=t[i];
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            ans=t[n];
        }
        return ans;
        
    }
};