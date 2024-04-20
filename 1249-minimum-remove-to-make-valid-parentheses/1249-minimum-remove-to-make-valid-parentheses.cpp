static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n = s.size();
        stack<int> st;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') st.push(i);
            else if (s[i] == ')' && !st.empty() && s[st.top()] == '(') st.pop();
            else if ((s[i] == ')' && (st.empty() || s[st.top()] != '('))) st.push(i);
        }
        while (!st.empty()) {
            s[st.top()] = '$';
            st.pop();
        }
        string sol = "";
        for (int i = 0; i < n; i++) {
            if (s[i] != '$') sol += s[i];
        }
        return sol;
    }
};
