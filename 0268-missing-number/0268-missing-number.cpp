class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=0;
        if(n==1)
        {
            if(nums[0]==1)
            {
                return 0;
            }
            else if(nums[0]==0)
            {
                return 1;
            }
        }
        else
        {
        for(int i=0;i<n;i++)
        {
            if(i!=nums[i])
            {
                ans=i;
                break;
            }
            else
            {
                ans=n;
            }
        }
        }
        return ans;
    }
};