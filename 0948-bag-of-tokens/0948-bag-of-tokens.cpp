static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n=tokens.size();
        int score=0;
        sort(tokens.begin(),tokens.end());
        int i=0;
        int maxScore=0;
        int j=n-1;
        while(i<=j)
        {
            if(power>=tokens[i])
            {
                power-=tokens[i];
                i++;
                score++;
                maxScore=max(maxScore,score);
            }
            else if(power<tokens[i])
            {
                if(score==0) return 0;
                power+=tokens[j];
                j--;
                score--;
            }
        }
        return maxScore;
    }
};