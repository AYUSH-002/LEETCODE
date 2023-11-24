static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int maxCoins(vector<int>& piles) 
    {
        sort(piles.begin(),piles.end());
        int n=piles.size();
        int j=n-2;
        int i=0;
        int res=0;
        while(j>i)
        {
            res+=piles[j];
            j=j-2;
            i++;
        }
        return res;
    }
};