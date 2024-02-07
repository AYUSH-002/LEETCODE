class Solution {
public:
    vector<int>ans;
    void result(int n,int k,int current)
    {
        if(n<=0)
        {
            ans.push_back(current);
            return;
        }
        for(int i=0;i<=9;i++)
        {
            int temp=current%10;
            if(abs(temp-i)==k)
            {
                result(n-1,k,current*10+i);
            }
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        for(int i=1;i<=9;i++)
        {
            result(n-1,k,i);
        }
        return ans;
    }
};