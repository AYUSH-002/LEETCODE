static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        map<int,int>mp;
        for(auto x:nums)
        {
            mp[x]++;
        }
        sort(nums.begin(),nums.end());
        int j=nums.size()-1;
        for(auto x:mp)
        {
            if(mp.find(-nums[j])!=mp.end()) return nums[j];
            else j--;
        }
        return -1;
    }
};