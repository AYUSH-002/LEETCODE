static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int alice=0;
        int bob=0;
        sort(piles.begin(),piles.end());
        int i=0;
        while(piles.size()>0)
        {
            if(i%2==0)
            {
                alice+=piles.back();
                piles.pop_back();
            }
            else
            {
                bob+=piles.back();
                piles.pop_back();
            }
            i++;
        }
        return alice>bob;
    }
};