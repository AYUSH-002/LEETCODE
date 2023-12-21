static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());  
        int n=points.size();
        int res=0;
        for(int i=0;i<n-1;i++)
        {
            res=max(res,(points[i+1][0]-points[i][0]));
        }
        return res;
    }
};