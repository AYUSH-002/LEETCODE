static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int maxLength = 0;
        int currentLength=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                currentLength++;
            }
            else
            {
                int j=i+1;
                while(j<n && nums[j]!=0)
                {
                    currentLength++;
                    j++;
                }
                maxLength=max(maxLength,currentLength);
                currentLength=0;
            }
        }
        maxLength=max(maxLength,currentLength);
        if(maxLength==n) maxLength-=1;
        return maxLength;
    }
};