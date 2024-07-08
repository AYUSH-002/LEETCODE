static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    void solve(int index,vector<int>&nums,int k,int &result)
    {
        if(nums.size()==1)
        {
            result=nums.back();
            return;
        }
        index=(index+k)%nums.size();
        nums.erase(nums.begin()+index);
        solve(index,nums,k,result);
    }
    int findTheWinner(int n, int k) {
        int result=0;
        vector<int>nums;
        for(int i=1;i<=n;i++) nums.push_back(i);
        solve(0,nums,k-1,result);
        return result;
    }
};