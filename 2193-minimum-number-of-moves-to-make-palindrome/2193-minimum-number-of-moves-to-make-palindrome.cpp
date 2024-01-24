class Solution {
public:
    int minMovesToMakePalindrome(string s) {
        int n=s.size();
        int l=0;
        int h=n-1;
        int res=0;
        while(l<h)
        {
            if(s[l]==s[h])
            {
                l++;
                h--;
            }
            else
            {
                int k=h;
                while(l<k && s[l]!=s[k])
                {
                    k--;
                }
                if(l==k)
                {
                    swap(s[l],s[l+1]);
                    res++;
                }
                else
                {
                    while(k<h)
                    {
                        swap(s[k],s[k+1]);
                        k++;
                        res++;
                    }
                }
            }
        }
        return res;
    }
};