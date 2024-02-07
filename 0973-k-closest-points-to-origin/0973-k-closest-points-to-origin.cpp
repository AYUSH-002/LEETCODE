static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<double,int>>res;
        int n=points.size();
        for(int i=0;i<n;i++)
        {
            double dis=0;
            dis=sqrt(pow(abs(points[i][0]-0),2)+pow(abs(points[i][1]-0),2));
            pair<double,int>ans=make_pair(dis,i);
            res.push_back(ans);
        }
        sort(res.begin(),res.end());
        vector<vector<int>>result;
        for(auto& x:res)
        {
            if(k>0)
            {
                result.push_back(points[x.second]);
                k--;
            }
        }
        return result;
    }
};