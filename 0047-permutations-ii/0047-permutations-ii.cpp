class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
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
    // One more approach but it is just using a stl function so logic one this one is direct
    // vector<vector<int>> permuteUnique(vector<int>& nums) 
    // {
    //     ios_base::sync_with_stdio(0); cin.tie(NULL);
    //     sort(nums.begin(),nums.end());
    //     vector<vector<int>>res;
    //     do
    //     {
    //         res.push_back(nums);
    //     }
    //     while(next_permutation(nums.begin(),nums.end()));
    //     return res;

    // }
};