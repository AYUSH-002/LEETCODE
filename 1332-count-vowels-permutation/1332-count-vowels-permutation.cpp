static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int countVowelPermutation(int n) 
    {
        int mod=1000000007;
        int res=0;
        vector<long long int>prev(5,1);
        vector<long long int>curr(5,1);
        for(int j=2;j<=n;j++)
        {
            curr[0]=(prev[1])%mod;
            curr[1]=(prev[0]+prev[2])%mod;
            curr[2]=(prev[0]+prev[1]+prev[3]+prev[4])%mod;
            curr[3]=(prev[2]+prev[4])%mod;
            curr[4]=(prev[0])%mod;
            prev=curr;
        }
        for(int i=0;i<curr.size();i++)
        {
            res=(res+curr[i])%mod;
        }
        return res;
    }
};