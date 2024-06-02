static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        int day=1;
        int ans=0;
        for(auto meeting:meetings){
            ans+=(day<=meeting[0]?(meeting[0]-day):0);
            day=max(day,meeting[1]+1);
        }
        day--;
        ans+=(days-day);
        return ans;
    }
};