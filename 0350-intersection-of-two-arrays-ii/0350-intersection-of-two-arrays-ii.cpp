static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int>result;
        map<int,int>mp;

        if(n>m)
        {
            for(const int num:nums1)
            {
                mp[num]++;
            }
            for(const int num:nums2)
            {
                if(mp.find(num)!=mp.end() && mp[num]>0)
                {
                    result.push_back(num);
                    mp[num]--;
                }
            }
        }
        else
        {
            for(const int num:nums2)
            {
                mp[num]++;
            }
            for(const int num:nums1)
            {
                if(mp.find(num)!=mp.end() && mp[num]>0)
                {
                    result.push_back(num);
                    mp[num]--;
                }
            }
        }
        return result;
    }
};