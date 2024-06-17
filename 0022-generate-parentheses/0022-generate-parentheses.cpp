static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    string current = "";
    vector<string> result;

    void solve(int open, int close, int n) {
        if (current.size() == 2 * n) {
            result.push_back(current);
            return;
        }

        if (open < n) {
            current += "(";
            solve(open + 1, close, n);
            current.pop_back();
        }
        
        if (close < open) {
            current += ")";
            solve(open, close + 1, n);
            current.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        solve(0, 0, n);
        return result;
    }
};