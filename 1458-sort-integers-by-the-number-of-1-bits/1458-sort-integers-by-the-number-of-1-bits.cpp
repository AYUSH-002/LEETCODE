bool comp(int &a,int &b)
{
        int m=__builtin_popcountll(a);
        int n=__builtin_popcountll(b);
        if(m==n)
        {
            return a<b;
        }
        return m<n;
    }
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) 
    {
        sort(arr.begin(),arr.end(),comp);
        return arr;
    }

};