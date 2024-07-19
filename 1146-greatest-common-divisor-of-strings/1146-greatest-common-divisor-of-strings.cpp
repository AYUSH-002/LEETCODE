static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2!=str2+str1) return "";
        return str1.substr(0,gcd(str1.size(),str2.size()));

    }
};