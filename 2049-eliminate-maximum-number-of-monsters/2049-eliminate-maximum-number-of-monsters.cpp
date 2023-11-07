static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n=dist.size();
        vector<double>res(n);
        int ans=1;
        for(int i=0;i<n;i++)
        {
            res[i]=(dist[i]/double (speed[i]));
        }
        sort(res.begin(),res.end());
        for(int i=1;i<n;i++)
        {
            if(res[i]==1 || res[i]<1 || ans>=res[i])
            {
                return ans;
            }
            if(res[i]>1 && ans<ceil(res[i]))
            {
                ans++;
            }
        }
        return ans;   
    }
};