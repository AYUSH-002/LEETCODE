static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) 
    {
        int n=nums.size();
        int leftSum=0;
        int rightSum=accumulate(nums.begin(),nums.end(),0);
        vector<int>res;
        for(int i=0;i<n;i++)
        {
            int left=nums[i]*i-leftSum;
            int right=rightSum-nums[i]*(n-i);
            leftSum+=nums[i];
            rightSum-=nums[i];
            res.push_back(left+right);
        } 
        return res;
    }
};