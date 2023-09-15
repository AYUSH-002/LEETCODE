class Solution {
public:
    int minMovesToMakePalindrome(string s) {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        int n = s.size();
        int l = 0;
        int r = n-1;
        int c = 0;
        while(l < r)
        {
            if(s[l] == s[r])
            {
                l++;
                r--;
            }
            else
            {
                int k = r;
                while(k > l && s[l] != s[k])
                {
                    k--;
                }

                if(l == k)
                {
                    swap(s[l],s[l+1]);
                    c++;
                }
                else
                {
                    while(k < r)
                    {
                        swap(s[k],s[k+1]);
                        k++;
                        c++;
                    }
                }
            }
        }
        return c;
    }
};