static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int n=paths.size();
        string res="";
        if(n==1)
        {
            return paths[0][1];
        }
        unordered_map<string,int>umap1;
        unordered_map<string,int>umap2;
        for(int i=0;i<n;i++)
        {
            umap1[paths[i][0]]++;
            umap2[paths[i][1]]++;
        }
        for(auto x:umap2)
        {
            if(umap1.find(x.first)==umap1.end())
            {
                res+=x.first;
            }
        }
        return res;
    }
};