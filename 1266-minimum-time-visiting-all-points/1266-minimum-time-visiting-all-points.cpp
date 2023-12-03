static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int res=0;
        int n=points.size();
        for(int i=1;i<n;i++)
        {
            int x=abs(points[i][0]-points[i-1][0]);
            int y=abs(points[i][1]-points[i-1][1]);
            res+=max(x,y);
        }
        return res;
    }
};