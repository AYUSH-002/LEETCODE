class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        map<int,int>mp;
        for (auto &it:nums) mp[it]++;
        for (auto &it:mp) if(it.second>nums.size()/2) return it.first;
        return 1;
        // int n=nums.size();
        // sort(nums.begin(),nums.end());
        // return nums[n/2];
    }
};