class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        int n=nums.size();
        if(n==1)
        {
            return nums[0];
        }
        int l=0;
        int h=n-1;
        int mini=INT_MAX;
        while(l<h)
        {
            if(nums[l]<nums[h])
            {
                mini=min(mini,nums[l]);
                l++;
            }
            if(nums[l]>nums[h])
            {
                mini=min(mini,nums[h]);
                h--;
            }
        }
        return mini;
    }
};