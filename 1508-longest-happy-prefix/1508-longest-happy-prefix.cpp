static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    string longestPrefix(string s) {
        int n=s.size();
        int i=0,j=1;
        vector<int>position(n,0);
        while(j<n)
        {
            if(s[i]==s[j])
            {
                position[j]=i+1;
                i++;
                j++;
            }
            else if(i)
            {
                i=position[i-1];
            }
            else
            {
                j++;
            }
        }
        return s.substr(0,i);
    }
};