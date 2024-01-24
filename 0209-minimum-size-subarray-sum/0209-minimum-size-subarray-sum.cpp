static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int ans=INT_MAX;
        int temp=0;
        if(accumulate(nums.begin(),nums.end(),temp)<target)
        {
            return 0;
        }
        int j=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            while(sum>=target)
            {
                ans=min(ans,i-j+1);
                sum-=nums[j];
                j++;
            }
        }
        return ans;
    }
};