class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) 
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        int n=nums.size();
        vector<vector<int>>res;
        set<vector<int>>ans;
        permutation(nums,ans,0,n-1);
        for(auto& a:ans)
        {
            res.push_back(a);
        }
        return res;
    }
    void permutation(vector<int>nums,set<vector<int>>&ans,int l,int r)
    {
        if(l>=nums.size())
        {
            ans.insert(nums);
            return;
        }
        for(int i=l;i<=r;i++)
        {
            swap(nums[i],nums[l]);
            permutation(nums,ans,l+1,r);
            swap(nums[i],nums[l]);
        }
    }
};