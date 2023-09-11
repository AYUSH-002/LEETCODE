class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        int n=nums.size();
        int index=-1;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i+1]>nums[i])
            {
                index=i;
                break;
            }
        }
        for(int i=n-1;i>index && index!=-1;i--)
        {
            if(nums[i]>nums[index])
            {
                swap(nums[i],nums[index]);
                break;
            }
        }
        reverse(nums.begin()+1+index,nums.end());
         
    }
};