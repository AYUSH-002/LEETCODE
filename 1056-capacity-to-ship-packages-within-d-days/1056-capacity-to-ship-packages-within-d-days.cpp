static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public: 
    bool possible(vector<int>& weights,int temp,int days)
    {
        int n=weights.size();
        int count=0;
        int totalDays=1;
        for(int i=0;i<n;i++)
        {
            count+=weights[i];
            if(count>temp)
            {
                totalDays++;
                count=weights[i];
            }
        }
        return totalDays<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int left=*max_element(weights.begin(),weights.end());
        int right=0;

        for(const int weight:weights)
        {
            right+=weight;
        } 

        while (left < right) {
            int mid = left + (right - left) / 2;
            if (possible(weights, mid,days)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        
        return right;
    }
};