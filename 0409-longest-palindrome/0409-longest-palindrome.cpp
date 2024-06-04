static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int longestPalindrome(string s) {
    int n = s.size();
    if (n == 1) return 1;

    map<char, int> result;
    for (const char c : s) {
        result[c]++;
    }

    int solution = 0;
    bool oddFound=false;
    for (const auto& x : result) {
        if (x.second % 2 == 0) {
            solution += x.second;
        }
        else
        {
            solution+=x.second-1;
            oddFound=true;
        }
    }

    return oddFound==true ? solution+1:solution;
    }
};