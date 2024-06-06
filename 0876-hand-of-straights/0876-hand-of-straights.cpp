static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n=hand.size();
        if(n%groupSize!=0) return false;
        map<int,int>result;
        for(const int x:hand)
        {
            result[x]++;
        }
        while(!result.empty())
        {
            int start=result.begin()->first;
            for(int i=0;i<groupSize;i++)
            {
                int card=start+i;
                if(result[card]==0) {
                    return false;
                }
                result[card]--;
                if(result[card]==0){
                    result.erase(card);
                }
            }

        }
        return true;

    }
};