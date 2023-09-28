class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        int n=nums.size();
        vector<int>res;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0)
            {
                res.push_back(nums[i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2!=0)
            {
                res.push_back(nums[i]);
            }
        }
        return res;
    }
};