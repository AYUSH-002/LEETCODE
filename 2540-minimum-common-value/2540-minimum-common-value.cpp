static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i= 0 , j = 0;
        bool flag = true;
        while(flag && i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]<nums2[j])
            i++;
            else if(nums1[i]>nums2[j])
            j++;
            else
            flag = false;
        }
        return flag?-1 : nums1[i];
    }
};