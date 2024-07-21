static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        int n=s.size();
        for(auto &c:s)
        {
            if(isalpha(c)) st.push(c);
            if(c=='*') st.pop();
        }     
        string result="";
        while(!st.empty())
        {
            result+=st.top();
            st.pop();
        }  
        reverse(result.begin(),result.end());
        return result;
    }
};