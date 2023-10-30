static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
int numOfOnes(int &a) {
    int one = 0;
    unsigned int ua = static_cast<unsigned int>(a);

    while (ua > 0) {
        int x = ua % 2;
        if (x == 1) {
            one++;
        }
        ua = ua / 2;
    }

    return one;
}
bool comp(int &a,int &b)
{
    int m=numOfOnes(a);
    int n=numOfOnes(b);
    if(m==n)
    {
        return a<b;
    }
    return m<n;
}
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) 
    {
        sort(arr.begin(),arr.end(),comp);
        return arr;
    }
};