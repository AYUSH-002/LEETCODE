static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,int>res;
        unordered_map<int,int>ans;
        if(n==1)
        {
            return 1;
        }
        int m=trust.size();
        for(int i=0;i<m;i++)
        {
            res[trust[i][1]]++;
            ans[trust[i][0]]++;

        }
        for(auto x:res)
        {
            if(x.second==n-1 && ans.find(x.first)==ans.end())
            {
                return x.first;
            }
        }
        return -1;
    }
};