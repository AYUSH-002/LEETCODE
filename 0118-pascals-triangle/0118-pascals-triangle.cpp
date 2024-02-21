static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>res;
        for(int i=0;i<n;i++)
        {
            res.push_back(vector<int>(i+1,1));
        }
        for(int i=2;i<n;i++)
        {
            int m=res[i].size();
            for(int j=1;j<m;j++)
            {
                if(j<i)
                {
                    res[i][j]=res[i-1][j-1]+res[i-1][j];
                }
            }
        }
        return res;
    }
};