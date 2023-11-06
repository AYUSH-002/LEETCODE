static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int maxElement=*max_element(arr.begin(),arr.end());
        if(k>=maxElement)
        {
            return maxElement;
        }
        int res=arr[0];
        int n=arr.size();
        int streak=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]>res)
            {
                res=arr[i];
                streak=1;
            }
            else
            {
                streak++;
            }
            if(k==streak)
            {
                return res;
            }
        }
        return res;
    }
};