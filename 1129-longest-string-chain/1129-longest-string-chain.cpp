
static int speedup = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    return 0;
}();
class Solution {
public:
    int longestStrChain(vector<string>& words) {
        if(words.empty()) return 0;
        sort(words.begin(),words.end(),[](string &a,string &b){
            return a.size()<b.size();
        });
        int result=1;
        map<string,int>mp;
        for(const string word:words)
        {
            mp[word]=1;
            for(int j=0;j<word.size();j++)
            {
                string temp=word;
                temp.erase(j,1);
                if(!temp.empty() && mp.find(temp)!=mp.end())
                {
                    mp[word]=max(mp[word],mp[temp]+1);
                }
                result=max(mp[word],result);
            }
        }
        return result;
    }
};
