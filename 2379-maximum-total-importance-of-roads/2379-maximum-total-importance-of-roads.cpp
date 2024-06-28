static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<long long> counter(n, 0);
        for (auto &a : roads) {
            counter[a[0]]++;
            counter[a[1]]++;
        }
        sort(counter.begin(), counter.end());
        long long result = 0;
        for (long long i=0;i<n;i++) {
            result += ( (i+1)*counter[i] );
        }
        return result;
    }
};