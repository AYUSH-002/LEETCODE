static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int findWinningPlayer(vector<int>& skills, int k) {
        int n=skills.size();
        int result=0;
        int streak=0;
        for(int i=1;i<n;i++)
        {
            if(skills[result]<skills[i])
            {
                result=i;
                streak=1;
            }
            else
            {
                streak++;
            }
            if(streak==k) return result;
        }
        return result;
    }
};