static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
       sort(nums.begin(), nums.end());
       int l=0;
       int res=0;
       long curr=0;

       for(int r=0; r<nums.size(); r++)
       {
           long target=nums[r];
           curr+=target;
           while((r-l+1)*target-curr>k)
           {
               curr-=nums[l];
               l++;
           }
           res=max(res,r-l+1);
       }
       return res;
    }
};