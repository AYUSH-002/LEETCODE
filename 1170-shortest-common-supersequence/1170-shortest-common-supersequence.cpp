static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    string findLCS(string str1, string str2) {
        int len1 = str1.size();
        int len2 = str2.size();
        vector<vector<int>> dp(len1 + 1, vector<int>(len2 + 1, 0));

        for (int i = 1; i <= len1; ++i) {
            for (int j = 1; j <= len2; ++j) {
                if (str1[i - 1] == str2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        string lcs = "";
        int i = len1, j = len2;
        while (i > 0 && j > 0) {
            if (str1[i - 1] == str2[j - 1]) {
                lcs = str1[i - 1] + lcs;
                i--;
                j--;
            } else if (dp[i - 1][j] > dp[i][j - 1]) {
                i--;
            } else {
                j--;
            }
        }

        return lcs;
    }

    string shortestCommonSupersequence(string str1, string str2) {
        string result = "";
        string lcs = findLCS(str1, str2);

        int p1 = 0, p2 = 0;
        for (const char c : lcs) {
            while (str1[p1] != c) {
                result += str1[p1++];
            }
            while (str2[p2] != c) {
                result += str2[p2++];
            }
            result += c;
            p1++;
            p2++;
        }
        result += str1.substr(p1) + str2.substr(p2);
        return result;
    }
};
