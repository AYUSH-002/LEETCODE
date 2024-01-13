static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>res(26,0);
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            res[s[i]-'a']++;
            res[t[i]-'a']--;
        }
        for(auto x:res)
        {
            if(x>0)
            {
                ans+=x;
            }
        }
        return ans;
    }
};