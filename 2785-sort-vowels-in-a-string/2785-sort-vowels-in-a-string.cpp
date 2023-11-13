class Solution {
public:
    bool isVowel(char ch){
        if(ch=='a' || ch == 'e' ||ch =='i'|| ch=='o' || ch=='u' || ch == 'A' || ch == 'E' || ch == 'I' || ch =='O' || ch =='U' )
        return true;
        return false;
    }
    string sortVowels(string s) {
        ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
        string vol = "";
        for(int i=0;i<s.size();i++){
            if(isVowel(s[i])) vol+=s[i];
        }

        sort(vol.begin(),vol.end());

        int j=0;
        for(int i=0;i<s.size();i++){
            if(isVowel(s[i])){
                s[i]= vol[j++];
            }

        }
        return s;
        
    }
};