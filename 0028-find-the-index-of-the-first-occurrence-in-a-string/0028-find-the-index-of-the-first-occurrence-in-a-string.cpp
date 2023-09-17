class Solution {
public:
    int strStr(string haystack, string needle) {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        int n=haystack.size();
        int m=needle.size();
        if(n==m && n==1 && haystack[0]==needle[0])
        {
            return 0;
        }
        if(n==m && n>1)
        {
            for(int i=0;i<n;i++)
            {
                if(haystack[i]!=needle[i]){
                    return -1;
                }
            }
            return 0;
        }
        else if(m>n)
        {
            return -1;
        }
        else
        {
        for(int i=0;i<=n-m;i++)
        {
            int j;
            for(j=0;j<m;j++)
            {
                if(haystack[i+j]!=needle[j])
                {
                    break;
                }
            }
            if(j==m)
            {
                return i;
            }
        }
        return -1;
        }
    }
};