static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        // int res = 0;
        // int n = chars.size();

        // for (int i = 0; i < words.size(); i++) {
        //     int m = words[i].size();
        //     int j = 0;

        //     sort(words[i].begin(), words[i].end());
        //     sort(chars.begin(), chars.end());

        //     for (int k = 0; k < n && j < m; k++) {
        //         if (chars[k] == words[i][j]) {
        //             j++;
        //         }
        //     }

        //     if (j == m) {
        //         res += m;
        //     }
        // }

        // return res;
        unordered_map<char,int>freq;
        unordered_map<char,int>rep;
        int ans=0;
        for(int i=0;i<chars.size();i++){
            freq[chars[i]]++;
        }
        for(int i=0;i<words.size();i++){
            string s=words[i];
            int flag=0;
            for(int j=0;j<s.size();j++){
                rep[s[j]]++;
                if(rep[s[j]]>freq[s[j]]){
                    flag=1;
                    
                    break;
                }
            }
            if(flag==0){
                ans=ans+s.size();
            }
            rep.clear();
        }
        return ans;
    }
};