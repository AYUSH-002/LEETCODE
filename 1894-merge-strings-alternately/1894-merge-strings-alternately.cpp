static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string sol="";
        int n=word1.size();
        int m=word2.size();
        int i=0,j=0,turn=0;
        while(i<n && j<m)
        {
            if(turn%2==0)
            {
                sol+=word1[i];
                i++;
            }
            else
            {
                sol+=word2[j];
                j++;
            }
            turn++;
        }
        while(i<n)
        {
            sol+=word1[i];
            i++;
        }
        while(j<m)
        {
            sol+=word2[j];
            j++;
        }
        return sol;
    }
};