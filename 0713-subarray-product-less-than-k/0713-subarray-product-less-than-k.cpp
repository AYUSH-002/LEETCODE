static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count=0,product=1;
        int i=0;
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]<k) count++;
            product*=nums[j];
            while(product>=k && i<j)
            {
                product/=nums[i];
                i++;
            }
            count+=(j-i);
        }
        return count;
    }
};