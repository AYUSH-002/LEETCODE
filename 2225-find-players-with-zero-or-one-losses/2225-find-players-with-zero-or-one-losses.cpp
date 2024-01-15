static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>loser;
        map<int,int>winner;
        int n=matches.size();
        for(int i=0;i<n;i++)
        {
            winner[matches[i][0]]++;
            loser[matches[i][1]]++;
        }
        vector<vector<int>>res;
        vector<int>ans1;
        for(auto x:winner)
        {
            if(loser.find(x.first)==loser.end())
            {
                ans1.push_back(x.first);
            }
        }
        res.push_back(ans1);
        vector<int>ans2;
        for(auto x:loser)
        {
            if(x.second==1)
            {
                ans2.push_back(x.first);
            }
        }
        res.push_back(ans2);
        return res;
    }
};