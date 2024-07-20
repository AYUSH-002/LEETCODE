static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char>result;
        int n=chars.size();
        int i=0;
        while(i<n)
        {
            char c=chars[i];
            int count=0;
            while(i<n && chars[i]==c)
            {
                count++;
                i++;
            }
            result.push_back(c);
            if(count==1) continue;
            string str=to_string(count);
            for(int j=0;j<str.size();j++)
            {
                result.push_back(str[j]);
            }
        }
        chars=result;
        return result.size();
    }
};