static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int res=0;
        int n=neededTime.size();
        for(int i=1;i<n;i++)
        {
            if(colors[i-1]==colors[i])
            {
                res+=min(neededTime[i],neededTime[i-1]);
                neededTime[i]=max(neededTime[i],neededTime[i-1]);
            }
        }
        return res;
    }
};