static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n = rating.size();
        vector<int> left_smaller(n, 0), right_larger(n, 0);
        vector<int> left_larger(n, 0), right_smaller(n, 0);

        for (int j = 0; j < n; ++j) {
            for (int i = 0; i < j; ++i) {
                if (rating[i] < rating[j]) {
                    left_smaller[j]++;
                } else if (rating[i] > rating[j]) {
                    left_larger[j]++;
                }
            }
        }

        for (int j = n - 1; j >= 0; --j) {
            for (int k = j + 1; k < n; ++k) {
                if (rating[k] > rating[j]) {
                    right_larger[j]++;
                } else if (rating[k] < rating[j]) {
                    right_smaller[j]++;
                }
            }
        }

        int teams = 0;
        for (int j = 0; j < n; ++j) {
            teams += left_smaller[j] * right_larger[j];
            teams += left_larger[j] * right_smaller[j];
        }

        return teams;
    }
};
