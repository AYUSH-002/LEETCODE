static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    string reverseParentheses(string s) {
        int n=s.size();
        stack<string>st;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                st.push(string(1, s[i]));
            }
            else if(s[i]==')')
            {
                string temp="";
                while(st.top()!="(")
                {
                    string t=st.top();
                    if(t.size()>1)
                    {
                        reverse(t.begin(),t.end());
                        temp+=t;
                    }
                    else
                    {
                        temp+=t;
                    }
                    st.pop();
                }
                st.pop();
                st.push(temp);
            }
            else
            {
                st.push(string(1,s[i]));
            }
        }
        string result="";
        if(st.size()==1) return st.top();
        while(!st.empty())
        {
            string t=st.top();
            if(t.size()>1)
            {
                reverse(t.begin(),t.end());
                result+=t;
            }
            else
            {
                result+=t;
            }
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};