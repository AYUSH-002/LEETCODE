class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>v;
        v.push_back(nums[0]);
        int ans=1;
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i]>v.back())
            {
                  v.push_back(nums[i]);
                  ans++;
            }
            else
            {
                int j = lower_bound(v.begin(),v.end(),nums[i]) - v.begin();
                v[j]=nums[i];
            }
        }
        return ans;
    }
};