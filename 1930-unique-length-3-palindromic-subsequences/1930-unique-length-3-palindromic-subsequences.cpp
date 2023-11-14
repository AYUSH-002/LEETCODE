static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int countPalindromicSubsequence(string s) 
    {
        int n=s.size();
        int res=0;
        for(char c='a';c<='z';c++)
        {
            int i=0;
            int j=n-1;
            while(i<n)
            {
                if(c==s[i]) break;
                i++;
            }
            while(j>=0)
            {
                if(c==s[j]) break;
                j--;
            }
            unordered_map<char,int>umap;
            for(int k=i+1;k<j;k++)
            {
                umap[s[k]]++;
            }
            res+=umap.size();
        }
        return res;
    }
};