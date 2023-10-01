class Solution {
public:
    string reverseWords(string str) {
        ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
        int index=0;
        for(int i=0;i<str.size();i++){
            if(str[i]== ' '){
                reverse(str.begin()+index,str.begin()+i);
                index=i+1;
            }
        }
        reverse(str.begin()+index,str.end());
        return str;
    }
};