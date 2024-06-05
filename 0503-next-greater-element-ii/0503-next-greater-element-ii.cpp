static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        stack<int>s;
        vector<int>result(n,-1);
        for(int i=2*n-1;i>=0;i--)
        {
            while(!s.empty() && nums[i%n]>=s.top()) s.pop();
            if(i<n && !s.empty())
            {
                result[i]=s.top();
            }
            s.push(nums[i%n]);
        }
        return result;
    }
};