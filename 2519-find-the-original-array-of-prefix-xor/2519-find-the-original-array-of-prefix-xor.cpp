class Solution {
public:
    vector<int> findArray(vector<int>& pref) 
    {
        int n=pref.size();
        vector<int>res;
        res.push_back(pref[0]);
        for(int i=0;i<n-1;i++)
        {
            res.push_back(pref[i]^pref[i+1]);
        }
        return res;
    }
};