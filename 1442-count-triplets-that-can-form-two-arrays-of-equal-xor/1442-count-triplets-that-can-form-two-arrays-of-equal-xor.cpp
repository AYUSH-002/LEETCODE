static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n=arr.size();
        int solution=0;
        vector<int>XorArray(n+1);
        for(int i=0;i<n;i++)
        {
            XorArray[i+1]=XorArray[i]^arr[i];
        }
        for(int i=0;i<n+1;i++)
        {
            for(int j=i+1;j<n+1;j++)
            {
                if(XorArray[i]==XorArray[j])
                {
                    solution+=(j-i-1);
                }
            }
        }
        return solution;
    }
};