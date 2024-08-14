static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    static bool cmp(vector<int>&a,vector<int>&b)
    {
        return a[1]<b[1];
    }
    int findMinArrowShots(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),cmp);
        int sol=1;
        int last=intervals[0][1];
        for(int i=1;i<n;i++)
        {
            if(intervals[i][0]>last)
            {
                sol++;
                last=intervals[i][1];
            }
        }
        return sol;
    }
};