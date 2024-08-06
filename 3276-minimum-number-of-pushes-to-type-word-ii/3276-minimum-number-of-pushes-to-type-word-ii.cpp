static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int minimumPushes(string word) {
        map<char,int>mp;
        int result=0;
        for(const char c:word)
        {
            mp[c]++;
        }
        vector<pair<char, int>> vec(mp.begin(), mp.end());
        sort(vec.begin(), vec.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
            return a.second > b.second;
        });

        int index=0;
        for(const pair<char,int>p:vec)
        {
            int counter=(index/8)+1;
            index++;
            result+=(p.second*counter);
            cout<<p.second<<endl;
        }
        return result;
    }
};