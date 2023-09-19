class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        ios::sync_with_stdio(0); cin.tie(0);
        int ans=0;
        unordered_map<int,int>umap;
        for(auto i:nums)
        {
            umap[i]++;
        }
        for(auto x:umap)
        {
            if(x.second>1)
            {
                ans=x.first;
                break;
            }
        }
        return ans; 
        
       
    }
};