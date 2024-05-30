static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sol=0;
        for(int i=0;i<n;i++)
        {
            while(sol<=nums[i])
            {
                if(sol==n-i) return sol;
                sol++;
            }
            
        }
        return -1;
    }
};