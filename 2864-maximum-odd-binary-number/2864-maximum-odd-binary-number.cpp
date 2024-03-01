static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int numberOfOne(string s)
    {
        int n=s.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                count++;
            }
        }
        return count;
    }
    string maximumOddBinaryNumber(string s) {
        int count=numberOfOne(s);
        int i=0,j=s.size()-1;
        string zerosString(s.size(), '0');
        for(int i=0;i<count-1;i++)
        {
            zerosString[i]='1';
        }
        zerosString[j]='1';
        return zerosString;
    }
};