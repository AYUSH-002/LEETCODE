static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int nthUglyNumber(int n) 
    {
       vector<int> ans{1};
       int i2 = 0;
       int i3 = 0;
       int i5 = 0;

    while (ans.size() < n) {
      const int next2 = ans[i2] * 2;
      const int next3 = ans[i3] * 3;
      const int next5 = ans[i5] * 5;
      const int next = min({next2, next3, next5});
      if (next == next2)
        ++i2;
      if (next == next3)
        ++i3;
      if (next == next5)
        ++i5;
      ans.push_back(next);
    }

    return ans.back();
        
    }
};