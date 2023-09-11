class Solution {
public:
    bool isPalindrome(int x) 
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        if(x>=0 && x<10)
        {
            return true;
        }
        else if(x>9)
        {
            string str=to_string(x);
            int n=str.length();
            for(int i=0;i<n/2;i++)
            {
                if(str[i]!=str[n-i-1])
                {
                    return false;
                }
            }
            return true;
        }
        return false;
    }
};