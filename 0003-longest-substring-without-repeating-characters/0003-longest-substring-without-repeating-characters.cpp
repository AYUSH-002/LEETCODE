static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        vector<int>lastIndex(256,-1);
        int longest=0,start=0;
        for(int i=0;i<n;i++)
        {
            if(lastIndex[s[i]]==-1 || lastIndex[s[i]]<start)
            {
                longest=max(longest,i-start+1);
            }
            else
            {
                start=lastIndex[s[i]]+1;
            }
            lastIndex[s[i]]=i;
        }
        return longest;
    }
};