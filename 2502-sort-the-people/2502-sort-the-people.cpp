static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>>result;
        int n=names.size();
        for(int i=0;i<n;i++)
        {
            pair<int,string>p={heights[i],names[i]};
            result.push_back(p);
        }
        sort(result.rbegin(),result.rend());
        for(int i=0;i<n;i++)
        {
            names[i]=result[i].second;
        }
        return names;
    }
};