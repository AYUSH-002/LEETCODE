static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string temp = "";
        vector<string> sol;
        
        for (int i = 0; i < n; i++) {
            if (s[i] == ' ') {
                sol.push_back(temp);
                temp = "";
            } else {
                temp += s[i];
            }
        }
        
        if (!temp.empty()) {
            sol.push_back(temp);
        }
        
        sol.erase(remove(sol.begin(), sol.end(), ""), sol.end());
        
        reverse(sol.begin(), sol.end());
        
        string ans = "";
        for (int i = 0; i < sol.size(); i++) {
            ans += sol[i];
            if (i != sol.size() - 1) {
                ans += " ";
            }
        }
        
        return ans;
    }
};
