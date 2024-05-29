static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int numSteps(string s) {
        int n=s.size();
        int numZeros=0;
        int numOnes=0;
        reverse(s.begin(),s.end());
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1') numOnes++;
            else if(numOnes>0) numZeros++;
        }
        if(numOnes==1) return n-1;
        return numZeros+n+1;
    }
};