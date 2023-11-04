class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) 
    {
        int res=0;
        for(auto& l:left)
        {
            res=max(res,l);
        }
        for(auto& r:right)
        {
            res=max(res,n-r);
        }
        return res;
        // int res=0;
        // if(left.size()==0)
        // {
        //     return n-*min_element(right.begin(),right.end());
        // }
        // else if(right.size()==0)
        // {
        //     return *max_element(left.begin(),left.end());
        // }
        // res=max(*max_element(left.begin(),left.end()),n-*min_element(right.begin(),right.end()));
        // return res;
    }
};