static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& f, vector<int>& p) {
        vector<int>res;
        vector<int>start;
        vector<int>end;
        int n=p.size();
        int m=f.size();
        for(int i=0;i<m;i++)
        {
            start.push_back(f[i][0]);
            end.push_back(f[i][1]);
        }
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());
        for(int i=0;i<n;i++)
        {
            int initial=upper_bound(start.begin(),start.end(),p[i])-start.begin();
            int final=lower_bound(end.begin(),end.end(),p[i])-end.begin();
            res.push_back(initial-final);
        }
        return res;
    }
};