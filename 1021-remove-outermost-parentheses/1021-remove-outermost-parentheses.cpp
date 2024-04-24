static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        string sol="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                if(!st.empty())
                {
                    sol+=s[i];
                }
                st.push(s[i]);
            }
            else
            {
                st.pop();
                if(!st.empty())
                {
                    sol+=s[i];
                }
            }
        }
        return sol;
    }
};