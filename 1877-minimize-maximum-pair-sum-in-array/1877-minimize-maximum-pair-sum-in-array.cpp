static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        int res=INT_MIN,low=0,high=n-1;
        sort(nums.begin(),nums.end());
        while(low<high)
        {
            res=max(res,nums[low]+nums[high]);
            low++;
            high--;
        }
        return res;
    }
};