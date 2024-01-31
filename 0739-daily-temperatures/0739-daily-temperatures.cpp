static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
        vector<int>res(n,0);
        stack<int>st;
        for(int i=n-1;i>=0;i--)
        {
            int current=temp[i];
            if(st.empty())
            {
                st.push(i);
            }
            else
            {
                while(!st.empty() && temp[st.top()]<=current)
                {
                    st.pop();
                }
                if(st.empty())
                {
                    st.push(i);
                }
                else
                {
                    res[i]=st.top()-i;
                    st.push(i);
                }
            }
        }
        return res;
    }
};