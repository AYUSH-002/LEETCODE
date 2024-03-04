static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        int n=nums.size();
        int ans=0;
        if(n==1)
        {
            return nums[0];
        }
        for(int i=0;i<n;i++)
        {
            ans=ans^nums[i];
        }
        return ans;
    }
};