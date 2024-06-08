static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1 && nums[0]==0) return false; 
        unordered_set<int> result;
        vector<int>preSum(n,0);
        preSum[0]=(nums[0])%k;
        for(int i=1;i<n;i++)
        {
            preSum[i]=(preSum[i-1]+nums[i])%k;
        }
        for(int i=1;i<n;i++)
        {
            if(preSum[i]==0) return true;
            if(result.find(preSum[i])!=result.end()) return true;
            result.insert(preSum[i-1]);
        }
        return false;
    }
};