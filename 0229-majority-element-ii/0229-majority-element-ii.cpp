class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        vector<int>ans;
        unordered_map<int,int>umap;
        int n=nums.size();
        for(auto& it:nums)umap[it]++;
        for(auto& it:umap)
        {
            if(it.second>(n/3))
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};