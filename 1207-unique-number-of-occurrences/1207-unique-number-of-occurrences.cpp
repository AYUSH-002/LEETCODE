static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>umap;
        for(auto x:arr)
        {
            umap[x]++;
        }
        vector<int>res;
        for(auto x:umap)
        {
            res.push_back(x.second);
        } 
        sort(res.begin(),res.end());
        for(int i=0;i<res.size()-1;i++)
        {
            if(res[i]==res[i+1])
            {
                return false;
            }
        } 
        return true;
    }
};