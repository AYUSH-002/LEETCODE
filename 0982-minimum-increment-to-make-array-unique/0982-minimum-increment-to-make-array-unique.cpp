static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        map<int,int>mp;
        for(const int num:nums)
        {
            mp[num]++;
        }
        int result=0;
        int nextGreater=-1;
        for(auto x:mp)
        {
            if(x.first>nextGreater) nextGreater=x.first;
            while(x.second>1)
            {
                nextGreater++;
                result+=(nextGreater-x.first);
                x.second--;
                mp[nextGreater]++;
            }
        }
        return result;
    }
};