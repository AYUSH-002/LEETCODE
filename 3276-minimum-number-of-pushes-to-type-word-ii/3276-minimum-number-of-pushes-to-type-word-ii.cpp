static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int minimumPushes(string word) {
        vector<int> alphabets(26,0);
        for(auto i:word){
            alphabets[i-'a']++;
        }
        sort(alphabets.begin(),alphabets.end(),greater<int>());
        int result=0,m=0;
        for(int i=0;i<alphabets.size();i++){
            if(i>=0 && i<8){
                m=1;
            }
            else if(i>=8 && i<16){
                m=2;
            }
            else if(i>=16 && i<24 ){
                m=3;
            }
            else{
                m=4;
            }
            result+=alphabets[i]*m;
        }
        return result;
    }
};