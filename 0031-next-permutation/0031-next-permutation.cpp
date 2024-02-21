static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int index=-1;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i+1]>nums[i])
            {
                index=i;
                break;
            }
        }
        for(int i=n-1;i>=index && index!=-1;i--)
        {
            if(nums[i]>nums[index])
            {
                swap(nums[i],nums[index]);
                break;
            }
        }
        reverse(nums.begin()+index+1,nums.end());
    }
};