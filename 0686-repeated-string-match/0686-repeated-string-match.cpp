static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        if(a==b) return 1;
        if(b.size()==0) return 0;
        int repeat = 1;
        string repeatedA = a;
        while(repeatedA.size()<b.size())
        {
            repeatedA+=a;
            repeat++;
        }
        if(repeatedA.find(b)!= string::npos)
        {
            return repeat;
        }
        repeatedA+=a;
        repeat++;
        if(repeatedA.find(b)!= string::npos)
        {
            return repeat;
        }
        return -1;
    }
};