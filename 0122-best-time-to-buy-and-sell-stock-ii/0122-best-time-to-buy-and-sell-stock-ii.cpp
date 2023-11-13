static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int n=prices.size();
        int sell=0;
        int buy=prices[0];
        for(int i=1;i<n;i++)
        {
            if(prices[i-1]>prices[i])
            {
                sell+=(prices[i-1]-buy);
                buy=prices[i];
            }
            cout<<sell<<" "<<buy<<endl;
        }
        sell+=prices[n-1]-buy;
        return sell;
    }
};