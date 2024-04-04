static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution 
{
public:
    int maxDepth(string s) 
    {
        int count = 0;
        int maxDepth = 0;
        for (auto x : s) 
        {
            if (x == '(') 
            {
                count++;
                maxDepth = max(maxDepth, count);
            } else if (x == ')') 
            {
                count--;
            }
        }
        return maxDepth;
    }
};