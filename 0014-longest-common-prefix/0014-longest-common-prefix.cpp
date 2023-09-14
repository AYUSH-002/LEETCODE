class Solution {
public:
    string longestCommonPrefix(vector<string>& str)
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        int n=str.size();
        if(n==0)
        {
            return "";
        }
        else if(n==1)
        {
            return str[0];
        }
        sort(str.begin(),str.end());
        int len=min(str[0].size(),str[n-1].size());
        string f=str[0];
        string l=str[n-1];
        int i=0;
        while(i<len && f[i]==l[i])
        {
            i++;
        }
        return f.substr(0,i);

    }
};