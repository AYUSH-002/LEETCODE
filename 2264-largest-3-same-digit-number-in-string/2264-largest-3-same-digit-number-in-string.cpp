class Solution {
public:
    string largestGoodInteger(string num) {
        int n=num.size();
        string res="";
        for(int i=1;i<n-1;i++)
        {
            if(num[i-1]==num[i] && num[i]==num[i+1])
            {
                if(res.size()==0)
                {
                    res=num.substr(i-1,3);
                }
                else
                {
                    string ans=num.substr(i-1,3);
                    if(int(ans[0])<int(res[0]))
                    {
                        continue;
                    }
                    else
                    {
                        res=ans;
                    }
                }
                
            }
        }
        return res;
    }
};