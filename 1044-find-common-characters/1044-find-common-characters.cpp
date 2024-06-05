static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n=words.size();
        vector<map<char,int>>result;
        for(const string word:words)
        {
            map<char,int>temp;
            for(const char c:word)
            {
                temp[c]++;
            }
            result.push_back(temp);
        }
        map<char,int>count;
        map<char,int>repeatedMinCount;
        for (const auto& res : result) {
            for(const auto& x:res)
            {
                count[x.first]++;
                if(repeatedMinCount[x.first]==0)
                {
                    repeatedMinCount[x.first]=x.second;
                }
                else
                {
                    repeatedMinCount[x.first]=min(repeatedMinCount[x.first],x.second);
                }
            }
        }
        vector<string>finalSol;
        for(auto x:count)
        {
            if(x.second==n)
            {
                for(int i=0;i<repeatedMinCount[x.first];i++)
                {
                    finalSol.push_back(string(1,x.first));
                }
            }
        }
        return finalSol;
    }
};