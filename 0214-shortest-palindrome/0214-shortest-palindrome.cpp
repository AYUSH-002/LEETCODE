static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    string shortestPalindrome(string s) {
       int n=s.size();
       if(n==0) return s;

       string revS=s;
       reverse(revS.begin(),revS.end());

       string temp= s + "#" + revS;
       int m=temp.size();
       vector<int>pos(m,0);
       for(int i=1;i<m;i++)
       {
        int j=pos[i-1];
        while(j>0 && temp[i]!=temp[j]) j=pos[j-1];
        if(temp[i]==temp[j]) j++;
        pos[i]=j;
       }
       string toAdd=s.substr(pos.back());
       reverse(toAdd.begin(),toAdd.end());

       return toAdd+s;
    }
};