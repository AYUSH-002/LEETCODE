static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int n=students.size();
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int result=0;
        for(int i=0;i<n;i++)
        {
            result+=abs(students[i]-seats[i]);
        }
        return result;
    }
};