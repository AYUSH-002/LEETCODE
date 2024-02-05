static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>mp;
        for(auto& c:s)
        {
            mp[c]++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]]==1) return i;
        }
        return -1;
    }
};