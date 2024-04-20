static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        map<char, int> mp;
        for (char c : tasks) {
            mp[c]++;
        }
        
        int maxFreq = 0;
        for (auto x : mp) {
            maxFreq = max(maxFreq, x.second);
        }
        
        int maxFreqCount = 0;
        for (auto x : mp) {
            if (x.second == maxFreq) {
                maxFreqCount++;
            }
        }
        
        int intervalsRequired = (maxFreq - 1) * (n + 1) + maxFreqCount;
        
        return max(int(tasks.size()), intervalsRequired);
    }
};
