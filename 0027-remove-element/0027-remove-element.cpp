class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        int si=nums.size();
        int j=0;
        for(int i=0;i<si;i++)
        {
            if(nums[i]!=val)
            {
                nums[j++]=nums[i];
            }
        }
        return j;
    }
};