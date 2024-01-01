static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=g.size();
        int m=s.size();
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        int ans=0;
        int i=0,j=0;
        while(i<n && j<m)
        {
            if(g[i]<=s[j])
            {
                ans++;
                i++;
            }
            j++;
        }
        return ans;
    }
};