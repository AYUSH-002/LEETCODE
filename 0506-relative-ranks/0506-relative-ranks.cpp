static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int, int>> pq;
        int n = score.size();
        for(int i = 0; i < n; i++) {
            pq.push({score[i], i});
        }
        int i = 1;
        vector<string> answer(n);
        while(!pq.empty()) {
            pair<int, int> top = pq.top();
            pq.pop();
            if(i == 1) {
                answer[top.second] = "Gold Medal";
            }
            else if(i == 2) {
                answer[top.second] = "Silver Medal";
            }
            else if(i == 3) {
                answer[top.second] = "Bronze Medal";
            }
            else {
                answer[top.second] = to_string(i);
            }
            i++;
        }
        return answer;
    }
};