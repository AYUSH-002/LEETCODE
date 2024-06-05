static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> result;
        for (char c : num) {
            while (!result.empty() && k > 0 && result.top() > c) {
                result.pop();
                k--;
            }
            result.push(c);
        }

        while (k > 0 && !result.empty()) {
            result.pop();
            k--;
        }

        string finalNum;
        while (!result.empty()) {
            finalNum += result.top();
            result.pop();
        }

        reverse(finalNum.begin(), finalNum.end());

        int start = 0;
        while (start < finalNum.size() && finalNum[start] == '0') {
            start++;
        }
        finalNum = finalNum.substr(start);

        if (finalNum.empty()) return "0";

        return finalNum;
    }
};