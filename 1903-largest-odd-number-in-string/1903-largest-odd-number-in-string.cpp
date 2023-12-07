static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        for(int i=n-1;i>=0;i--)
        {
            if((num[i]-'0')&1==1)
            {
                return num.substr(0,i+1);
            }
        }
        return "";
    }
};