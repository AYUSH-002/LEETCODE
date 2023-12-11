static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int>umap;
        for(auto&c:arr)
        {
            umap[c]++;
        }
        for(auto& x:umap)
        {
            if(x.second>arr.size()/4)
            {
                return x.first;
            }
        }
        return 0;
    }
};