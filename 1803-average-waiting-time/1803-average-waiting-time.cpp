static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n=customers.size();
        int lastExecuted=customers[0][0];
        double result=0;
        for(int i=0;i<n;i++)
        {
            if(lastExecuted>customers[i][0])
            {
                lastExecuted+=customers[i][1];
                result+=(lastExecuted-customers[i][0]);
            }
            else
            {
                lastExecuted=customers[i][0];
                lastExecuted+=customers[i][1];
                result+=(lastExecuted-customers[i][0]);
            }
        }
        return result/customers.size();
    }
};