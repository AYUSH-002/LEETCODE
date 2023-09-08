class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        ios::sync_with_stdio(0); cin.tie(0);
        vector<int>ans;
        int n=nums1.size();
        int m=nums2.size();
        double bns=0;
        for(int i=0;i<n;i++)
        {
            ans.push_back(nums1[i]);
        }
        for(int i=0;i<m;i++)
        {
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(),ans.end());
        int p=n+m;
        int a=0;
        if(p%2==0)
        {
            a=p/2;
            bns=(ans[a]+ans[a-1])/2.000;
        }
        else
        {
            a=ceil(p/2);
            bns=ans[a];
        }
        return bns;
    }
};