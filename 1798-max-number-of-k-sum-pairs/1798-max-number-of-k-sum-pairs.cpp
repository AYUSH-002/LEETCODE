static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int result=0;
        map<int,int>mp;
        for(const int num:nums)
        {
            if(mp.find(k-num)!=mp.end() && mp[k-num]>0)
            {
                result++;
                mp[k-num]--;
                mp[num]--;
            }
            mp[num]++;
        }
        return result;
    }
};