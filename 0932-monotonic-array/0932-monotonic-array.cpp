class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        int n=nums.size();
        if(n==1)
        {
            return true;
        }
        if(nums[0]<nums[n-1])
        {
            int flag=-1;
            for(int i=0;i<n-1;i++)
            {
                if(nums[i]>nums[i+1])
                {
                    flag=0;
                    break;
                }
            }
            if(flag==0)
            {
                return false;
            }
            return true;
        }
        int flag=-1;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]<nums[i+1])
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
        {
            return false;
        }
        return true;
    }
};