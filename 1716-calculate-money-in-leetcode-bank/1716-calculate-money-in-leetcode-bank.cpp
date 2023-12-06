class Solution {
public:
    int totalMoney(int n) {
        vector<int>res;
        res.push_back(1);
        int prev=1;
        for(int i=1;i<n;i++)
        {
            if(i%7==0)
            {
                res.push_back(prev+1);
                prev+=1;
            }
            else
            {
                res.push_back(res[i-1]+1);
            }
        }
        return accumulate(res.begin(),res.end(),0);
    }
};