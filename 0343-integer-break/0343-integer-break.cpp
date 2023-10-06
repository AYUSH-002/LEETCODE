class Solution {
public:
    int integerBreak(int n) 
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
       if(n==2 || n==3)
       {
           return n-1;
       }
       int a=n/3;
       int r=n%3;
       int ans=1;
       if(r==0)
       {
           return pow(3,a);
       }
       else
       {
           if(r==1)
           {
           ans*=pow(3,a-1);
           int b=3+r;
           ans*=b;
           }
           else if(r==2)
           {
               ans*=pow(3,a);
               ans*=r;
           }
       }
       return ans;
    }
};