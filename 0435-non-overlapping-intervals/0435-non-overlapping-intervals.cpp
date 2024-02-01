static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        int res=0;
        int x=intervals[0][0];
        int y=intervals[0][1];
        int i=1;
        while(i<n)
        {
            if(intervals[i][0]>=y)
            {
                x=intervals[i][0];
                y=intervals[i][1];
            }
            else
            {
                res++;
                y=min(y,intervals[i][1]);
            }
            i++;
        }
        return res;
    }
};