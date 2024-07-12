static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    void solve(int n,vector<char>&current,vector<string>&result)
    {
        if(current.size()==n)
        {
            string temp(current.begin(), current.end());
            result.push_back(temp);
            return;
        }
        if(current.size()==0 || current.back()=='1')
        {
            current.push_back('0');
            solve(n,current,result);
            current.pop_back();
        }
        current.push_back('1');
        solve(n,current,result);
        current.pop_back();
    }
    vector<string> validStrings(int n) {
        vector<char>current;
        vector<string>result;
        solve(n,current,result);
        return result;
    }
};