static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int>total;
        for(auto& x:nums1)
        {
            total.push_back(x);
        }
        for(auto& x:nums2)
        {
            total.push_back(x);
        }
        sort(total.begin(),total.end());
        int n=total.size();
        if(n%2==0)
        {
            return (total[n/2]+total[(n/2)-1])/2.000;    
        }
        return total[n/2];
    }
};