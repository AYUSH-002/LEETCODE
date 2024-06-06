static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int minAddToMakeValid(string s) {
        int count=0;
        stack<int>result;
        for(const char c:s)
        {
            if(c=='(') result.push('(');
            else
            {
                if(!result.empty()) result.pop();
                else count++;
            }
        }
        return result.size()+count;
    }
};