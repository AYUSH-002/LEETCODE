static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        int n=intervals.size();
        vector<vector<int>>res;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<n;i++)
        {
            if(res.empty()||res.back()[1]<intervals[i][0])
            {
                res.push_back(intervals[i]);
            }
            else
            {
                res.back()[1]=max(res.back()[1],intervals[i][1]);
            }
        }
        return res;
    }
};