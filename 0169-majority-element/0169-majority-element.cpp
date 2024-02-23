class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return nums[n/2];
    }
};