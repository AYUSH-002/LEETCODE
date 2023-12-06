static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size();
        stack<int> res;
        int ans = 0;
        int start = -1;

        for (int i = 0; i < n; i++) {
            if(s[i]=='(')
            {
                res.push(i);
                if(start==-1)
                {
                    start=i;
                }
            }
            else
            {
                if(res.empty())
                {
                    start=-1;
                }
                else
                {
                    res.pop();
                    if(res.empty())
                    {
                        ans=max(ans,i-start+1);
                    }
                    else
                    {
                        ans=max(ans,i-res.top());
                    }
                }
            }
        }

        return ans;
    }
};