class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
         int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                return i;
            }
            else
            {
                if(nums[i]<target)
                {
                    count++;
                }
            }
        }
        return count;
    }
};