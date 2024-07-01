static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int countOdd=0;
        for(const int x:arr)
        {
            if(x%2!=0)
            {
                countOdd++;
                if(countOdd>=3) return true;
            }
            else
            {
                countOdd=0;
            }
        }
        return false;
    }
};