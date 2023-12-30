class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n=words.size();
        unordered_map<char,int>umap;
        for(int i=0;i<n;i++)
        {
            int m=words[i].size();
            for(int j=0;j<m;j++)
            {
                umap[words[i][j]]++;
            }
        }
        for(auto x:umap)
        {
            cout<<x.first<<endl;
            cout<<x.second<<endl;
            if(x.second%n!=0)
            {
                return false;
            }
        }
        return true;
    }
};