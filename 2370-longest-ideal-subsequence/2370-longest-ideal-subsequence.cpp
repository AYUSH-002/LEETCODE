static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int longestIdealString(string s, int k) {
        int n=s.size();
        int res=0;
        vector<int>dp(27,0);
        for(int i=0;i<n;i++)
        {
            int current=s[i]-'a'+1;
            int temp=0;
            for(int j=1;j<=26;j++)
            {
                if(abs(current-j)<=k)
                {
                    temp=max(temp,dp[j]);
                }
            }
            dp[current]=temp+1;
        }
        for(int i=0;i<27;i++)
        {
            res=max(res,dp[i]);
        }
        return res;
    }
};