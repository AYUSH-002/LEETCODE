static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) 
    {
        int n = nums.size();
        int maxi = INT_MIN;
        for(int i = 0; i < n; i++) maxi = max(maxi, nums[i]);

        int l = 0, r = 0;
        int count = 0;
        long long ans = 0;
        while(r<n)
        {
            if(nums[r]==maxi) count++;
            if(count<k)  r++;
            else if(count==k)
            {
                while(count==k && l<n)
                {
                    ans+=(n-r);
                    if(nums[l]==maxi) count--;
                    l++;
                }
                r++;
            }
        }
        return ans;
    }
};