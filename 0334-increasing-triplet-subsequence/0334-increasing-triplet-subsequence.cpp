static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first=INT_MAX;
        int second=INT_MAX;
        for(const int num:nums)
        {
            if(num<=first)
            {
                first=num;
            }
            else if(num<=second)
            {
                second=num;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};