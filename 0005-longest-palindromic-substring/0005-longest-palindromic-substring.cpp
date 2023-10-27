static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
string solve(string &s,int i,int j)
{
    while(i>=0 && j<s.size() && s[i]==s[j])
    {
        i--;
        j++;
    }
    return s.substr(i+1,j-i-1);
}
    string longestPalindrome(string s) 
    {
        // Better Approach
        int n=s.size();
        string ans="";
        for(int i=0;i<n;i++)
        {
            string temp=solve(s,i,i);
            if(temp.size()>ans.size())
            {
                ans=temp;
            }
         temp=solve(s,i,i+1);
            if(temp.size()>ans.size())
            {
                ans=temp;
            }
        }
        return ans;
        // // Normal Approach
        // int n=s.size(),j;
        // if(n==1)
        // {
        //     return s;
        // }
        // string sub="",subRev="",ans="";
        // for(int i=0;i<n;i++)
        // {
        //     j=n-1;
        //     while(i<j)
        //     {
        //         if(s[i]==s[j] && ans.size()<j-i+1)
        //         {
        //             sub=s.substr(i,j-i+1);
        //             subRev=sub;
        //             reverse(subRev.begin(),subRev.end());
        //             if(sub==subRev)
        //             {
        //                 ans=sub;
        //             }
        //         }
        //         j--;
        //     }
        // }
        // if(ans.size()==0)
        // {
        //     ans=s[0];
        // }
        // return ans;
    }
};