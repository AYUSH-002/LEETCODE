static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    string clearDigits(string s) {
        int n=s.size();
        stack<char>st;
        for(int i=0;i<n;i++)
        {
            if(isalpha(s[i]))
            {
                st.push(s[i]);
            }
            else
            {
                st.pop();
            }
        }
        string sol="";
        while(!st.empty())
        {
            sol+=st.top();
            st.pop();
        }
        reverse(sol.begin(),sol.end());
        return sol;
    }
};