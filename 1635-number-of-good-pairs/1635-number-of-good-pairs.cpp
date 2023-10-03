class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        int res=0;
        unordered_map<int,int>umap;
        for(auto& x:nums)
        {
            umap[x]++;
        }
        for(auto& x:umap)
        {
            res+=((x.second)*(x.second-1))/2;
        }
        return res;
    }
};