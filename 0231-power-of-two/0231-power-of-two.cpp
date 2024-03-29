class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        bool ans=false;
        if(n<=0)
        {
            return false;
        }
        double p = log10(n) / log10(2);
        if (p - (int)p == 0)
        {
            ans=true;
        }
        return ans;
    }
};