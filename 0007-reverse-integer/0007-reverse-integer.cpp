class Solution {
public:
    int reverse(int x) 
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        long int rev=0;
        long int temp=abs(x);
        int a=0;
        while(temp>0)
        {
            int digit=temp%10;
            rev=rev*10+digit;
            temp/=10;
        }
        int ans=int(rev);
        if(x>0)
        {
        if(rev==ans)
        {
            return rev;
        }
        else 
        {
            return 0;
        }
        }
        else 
        {
            if(-rev==-ans)
            {
                return -rev;
            }
            else
            {
                a=0;
            }
        }
        return a;
    }
};