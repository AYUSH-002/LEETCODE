static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int result = 0;

        for (int i = 0; i < n; i++) {
            if (grumpy[i] == 0) {
                result += customers[i];
                customers[i] = 0;
            }
        }

        int sum = accumulate(customers.begin(), customers.begin() + minutes, 0);
        int maximum = sum;

        for (int i = minutes; i < n; i++) {
            sum += customers[i] - customers[i - minutes];
            maximum = max(maximum, sum);
        }

        return maximum + result;
    }
};
