static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int maxProfit(int k,vector<int>& prices) {
        vector<int>dpBuy(k,INT_MIN);
        vector<int>dpSell(k,0);

        for(const int price:prices)
        {
            for(int i=0;i<k;i++)
            {
                if(i>0)
                {
                    dpBuy[i]=max(dpBuy[i],dpSell[i-1]-price);
                    dpSell[i]=max(dpSell[i],price+dpBuy[i]);
                }
                else
                {
                    dpBuy[i]=max(dpBuy[i],-price);
                    dpSell[i]=max(dpSell[i],price+dpBuy[i]);
                }
            }
        }
        return dpSell[k-1];
    }
};