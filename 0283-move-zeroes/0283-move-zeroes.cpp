static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        for(int j=0;j<n;j++)
        {
            if(nums[j]!=0)
            {
                swap(nums[i],nums[j]);
                i++;
            }
        }
    }
};