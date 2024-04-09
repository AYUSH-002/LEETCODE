static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans=0;
        while(true){
            for(int i=0;i<tickets.size();i++){
                if(tickets[i]!=0){
                    ans++;
                    tickets[i]--;
                }
                if(i==k && tickets[i]==0){
                    return ans;
                }
            }
        }
        return -1;
    }
};