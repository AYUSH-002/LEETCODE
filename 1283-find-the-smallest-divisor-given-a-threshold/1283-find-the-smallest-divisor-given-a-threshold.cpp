static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int calculateSum(vector<int>& nums,int val)
    {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=ceil((double)nums[i]/val);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int low = 1;
    int high = nums[n - 1];
    
    while (low < high) {
        int mid = low + (high - low) / 2; 
        int sum = calculateSum(nums, mid);
        
        if (sum > threshold) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    
    return low;
    }
};