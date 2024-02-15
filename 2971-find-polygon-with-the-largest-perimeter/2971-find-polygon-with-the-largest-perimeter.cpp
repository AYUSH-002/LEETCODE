static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        long long preFix=0;
        for(int i=0;i<n;i++)
        {
            preFix+=nums[i];
        }
        for(int i=n-1;i>=2;i--)
        {
            preFix-=nums[i];
            if(nums[i]<preFix)
            {
                return preFix+nums[i];
            }
        }
        return -1;
    }
};