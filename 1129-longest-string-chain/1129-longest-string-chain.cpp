class Solution {
 public:
  int longestStrChain(vector<string>& words) {
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int ans = 0;
    unordered_map<string, int> dp;

    sort(words.begin(), words.end(),
         [](const auto& a, const auto& b) { return a.length() < b.length(); });

    for (const string& word : words) {
      for (int i = 0; i < word.length(); ++i) {
        const string pred = word.substr(0, i) + word.substr(i + 1);
        dp[word] = max(dp[word], (dp.count(pred) ? dp[pred] : 0) + 1);
      }
      ans = max(ans, dp[word]);
    }

    return ans;
  }
};
