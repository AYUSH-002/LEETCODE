class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int n=nums.size();
        int one=0,two=0;
        for(int i=0;i<n;i++)
        {
            one=(one^nums[i]) & ~two;
            two=(two^nums[i]) & ~one;
        }
        // unordered_map<int,int>umap;
        // for(auto i:nums)
        // {
        //     umap[i]++;
        // }
        // int ans=0;
        // for(auto j:umap)
        // {
        //     if(j.second==1)
        //     {
        //         ans=j.first;
        //     }
        // }
        // return ans;
        return one;
    }
};