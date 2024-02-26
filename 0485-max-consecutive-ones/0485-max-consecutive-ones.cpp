static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int findMaxConsecutiveOnes(std::vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int maxCount = 0;
        for (int i = 0; i < n; i++) {
            if(nums[i]==1) count++;
            else
            {
                maxCount=max(count,maxCount);
                count=0;
            }
        }
        return max(maxCount,count);
    }
};
