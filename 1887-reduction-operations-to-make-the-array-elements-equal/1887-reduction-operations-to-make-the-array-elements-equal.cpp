static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int reductionOperations(vector<int>& nums) 
    {
        int n=nums.size();
        int res=0;
        sort(nums.begin(),nums.end());
        int high=n-1;
        while(high>=0)
        {
            int largestElement=nums[high];
            while(high>=0 && nums[high]==largestElement)
            {
                high--;
            }
            int count=n-1-high;
            if(high<0) break;
            res+=count;
        }
        return res;
    }
};