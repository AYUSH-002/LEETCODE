static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    static bool cmp(pair<int, int>& a, pair<int, int>& b){
        if(a.first != b.first) return a.first<b.first;
        return a.second > b.second;
    }
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int, int>> values;
        for(int i=0; i<profits.size(); i++){
            values.push_back({capital[i], profits[i]});
        }
        
        sort(values.begin(), values.end(), cmp);
        priority_queue<int> pq;

        int i=0;
        for(; i<profits.size(); i++){
            if(values[i].first <= w){
                pq.push(values[i].second);
            }
            else break;
        }

        while(!pq.empty() && k--){
            w += pq.top();
            pq.pop();
            for(; i<profits.size(); i++){
                if(values[i].first <= w){
                    pq.push(values[i].second);
                }
                else break;
            }
        }
        return w;
    }
};