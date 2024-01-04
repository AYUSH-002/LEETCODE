class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char,int>umap;
        int res=-1;
        for(int i=0;i<s.size();i++)
        {
            if(umap.find(s[i])==umap.end())
            {
                umap[s[i]]=i;
            }
            else
            {
                res=max(res,i-umap[s[i]]-1);
            }
        }
        return res;
    }
};