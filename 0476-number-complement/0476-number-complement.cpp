static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int solve(int num)
    {
        vector<int>bin;
        while(num>0)
        {
            bin.push_back(num%2);
            num/=2;
        }
        reverse(bin.begin(),bin.end());
        int n=bin.size();
        for(int i=0;i<n;i++)
        {
            bin[i] = (bin[i] == 1) ? 0 : 1;
        }
        int result=0;
        for(int i=0;i<n;i++)
        {
            result+=(pow(2,n-i-1)*bin[i]);
        }
        return result;
    }
    int findComplement(int num) {
        return solve(num);
    }
};