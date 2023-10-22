static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int maximumScore(vector<int>& nums, int k) 
    {
        int n=nums.size();
        int i=k;
        int j=k;
        int point=nums[k];
        int res=nums[k];
        while(i>0 || j<n-1)
        {
            if(i==0) j++;
            else if(j==n-1) i--;
            else if(nums[i-1]<nums[j+1]) j++;
            // if(nums[i-1]>=nums[j+1]) i--;
            else i--;
            point=min({point,nums[i],nums[j]});
            res=max(res,point*(j-i+1));
        }
        return res;
    }
};