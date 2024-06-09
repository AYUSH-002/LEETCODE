static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        mp[0]=1;
        int result=0;
        int preSum=0;
        for(int i=0;i<n;i++)
        {
            preSum+=nums[i];
            preSum%=k;
            if(preSum<0)
            {
                preSum+=k;
            }
            result+=mp[preSum];
            mp[preSum]++;
        }
        return result;
    }
};