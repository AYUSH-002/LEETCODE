static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stk;
        
        for (int asteroid : asteroids) {
            if (asteroid > 0) {
                stk.push(asteroid);
            } else {
                while (!stk.empty() && stk.top() > 0 && stk.top() < -asteroid) {
                    stk.pop();
                }
                
                if (stk.empty() || stk.top() < 0) {
                    stk.push(asteroid);
                } else if (stk.top() == -asteroid) {
                    stk.pop();
                }
            }
        }
        
        vector<int> result(stk.size());
        for (int i = stk.size() - 1; i >= 0; i--) {
            result[i] = stk.top();
            stk.pop();
        }
        
        return result;
    }
};
