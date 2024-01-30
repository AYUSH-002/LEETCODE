static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>res;
        for(auto s:tokens)
        {
            if(s=="+")
            {
                int a=res.top();
                res.pop();
                int b=res.top();
                res.pop();
                res.push(a+b);
            }
            else if(s=="-")
            {
                int a=res.top();
                res.pop();
                int b=res.top();
                res.pop();
                res.push(b-a);
            }
            else if(s=="*")
            {
                int a=res.top();
                res.pop();
                int b=res.top();
                res.pop();
                res.push(a*b);
            }
            else if(s=="/")
            {
                int a=res.top();
                res.pop();
                int b=res.top();
                res.pop();
                res.push(b/a);
            }
            else
            {
                res.push(stoi(s));
            }
        }
        return res.top();
    }
};