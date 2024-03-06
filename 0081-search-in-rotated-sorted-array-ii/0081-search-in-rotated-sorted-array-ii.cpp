static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    bool search(vector<int>& nums, int target) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int l=0;
        int r=n-1;
        while(l<=r)
        {
            int m=(l+r)/2;
            if(nums[m]==target)
            {
                return true;
            }
            else if (nums[m]>target)
            {
                r=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        return false;
    }
};