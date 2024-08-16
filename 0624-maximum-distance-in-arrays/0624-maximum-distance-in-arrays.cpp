static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int n=arrays.size();
        int minSoFar=arrays[0][0];
        int maxSoFar=arrays[0][arrays[0].size()-1];
        int maxDis=INT_MIN;
        for(int i=1;i<n;i++)
        {
            int m=arrays[i].size();
            maxDis=max({maxDis,abs(maxSoFar-arrays[i][0]),abs(minSoFar-arrays[i][m-1])});
            minSoFar=min(minSoFar,arrays[i][0]);
            maxSoFar=max(maxSoFar,arrays[i][m-1]);
        }
        return maxDis;
    }
};