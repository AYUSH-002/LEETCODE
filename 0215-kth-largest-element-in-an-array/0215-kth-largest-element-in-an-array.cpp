class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        ios::sync_with_stdio(0); cin.tie(0);
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return nums[n-k];
    }
};