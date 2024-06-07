static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<string> simple_tokenizer(string s)
    {
        vector<string>result;
        stringstream ss(s);
        string word;
        while (ss >> word) {
            result.push_back(word);
        }
        return result;
    }
    string replaceWords(vector<string>& dictionary, string sentence) {
        vector<string>result=simple_tokenizer(sentence);
        int n=dictionary.size();
        int m=result.size();
        for(int j=0;j<n;j++)
        {
        for(int i=0;i<m;i++)
        {
            if(result[i].starts_with(dictionary[j]))
            {
                result[i]=dictionary[j];
            }
        }
        }
        string sentences="";
        for(int i=0;i<m;i++)
        {
            if(i!=m-1)
            {
                sentences+=result[i];
                sentences+=" ";
            }
            else
            {
                sentences+=result[i];
            }
        }
        return sentences;
    }
};