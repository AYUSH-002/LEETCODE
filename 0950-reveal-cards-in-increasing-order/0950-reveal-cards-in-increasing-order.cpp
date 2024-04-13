static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();

class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n=deck.size();
        queue<int>q;
        sort(deck.begin(),deck.end());
        for(int i=0;i<n;i++)
        {
            q.push(i);
        }
        vector<int>res(n);
        for(int i=0;i<n;i++)
        {
            res[q.front()]=deck[i];
            q.pop();
            q.push(q.front());
            q.pop();
        }
        return res;
    }
};