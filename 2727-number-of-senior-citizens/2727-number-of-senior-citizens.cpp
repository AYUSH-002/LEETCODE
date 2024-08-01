static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int countSeniors(vector<string>& details) {
        int result = 0;
        for (const string& detail : details) {
            string age = "";
            age += detail[11];
            age += detail[12];
            if (stoi(age) > 60) result++;
        }
        return result;
    }
};
