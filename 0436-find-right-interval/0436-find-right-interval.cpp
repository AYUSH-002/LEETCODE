static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
     vector<int> ans;
     map<int,int> m{{INT_MAX,-1}};

     for(int i=0; i<intervals.size();i++){
         m[intervals[i][0]]=i;
     }
     for(int i=0;i<intervals.size();i++){
         int temp=intervals[i][1];
         auto it=m.lower_bound(temp);
         ans.push_back(it->second);
     }
     return ans;
    }
};