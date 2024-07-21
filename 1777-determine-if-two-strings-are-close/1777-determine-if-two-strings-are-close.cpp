static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length())
         return 0;
        map<char,int> m1;
        map<char,int> m2;
        for(int i=0;i<word1.length();i++)
        {
            m1[word1[i]]++;
        }
        vector<int> a1(26,false);
        for(auto it:m1)
        {
            a1[it.first-'a']=true;
        }
        
        for(int i=0;i<word2.length();i++)
        {
            m2[word2[i]]++;
        }
        vector<int> a2(26,false);
        for(auto it:m2)
        {
            a2[it.first-'a']=true;
        }
        vector<int> v1;
        vector<int> v2;
        for(auto it:m1)
        {
            v1.push_back(it.second);
        }
        for(auto it:m2)
        {
            v2.push_back(it.second);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        return v1==v2 && a1==a2;
    }
};