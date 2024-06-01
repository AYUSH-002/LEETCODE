static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int scoreOfString(string s) {
        int score = 0;
    for (int i = 1; i < s.length(); i++) {
        score += abs(static_cast<int>(s[i]) - static_cast<int>(s[i - 1]));
    }
    return score;
    }
};