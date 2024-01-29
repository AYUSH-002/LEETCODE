static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>res;
        int n=bank.size();
        int m=bank[0].size();
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;j<m;j++)
            {
                if(bank[i][j]=='1')
                {
                    count++;
                }
            }
            if(count>0)
            {
                res.push_back(count);
            }
        }
        int sol=0;
        for(int i=1;i<res.size();i++)
        {
            sol+=(res[i-1]*res[i]);
        }
        return sol;
    }
};