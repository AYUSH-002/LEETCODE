static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int ans =0;
        int n= nums.size();
        int count;
        for(int i=0;i<32;i++)
        {
            count=0;
            for(auto it:nums)
            {
                count+=(it>>i)&1;
            }
            ans+=count*(n-count);
        }
        return ans;
    }
};