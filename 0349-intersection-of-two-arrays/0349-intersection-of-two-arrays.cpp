class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int m=nums1.size(),n=nums2.size();
        int p1=0,p2=0;
        vector<int>ans;
        while(p1<m&&p2<n){
            if(nums1[p1]==nums2[p2]){
                ans.push_back(nums1[p1]);
                while((p1+1)<m&&nums1[p1]==nums1[p1+1])
                    p1++;
                p1++;
                while((p2+1)<n&&nums2[p2]==nums2[p2+1])
                    p2++;
                p2++;
            }
            else if(nums1[p1]>nums2[p2])
                p2++;
            else p1++;
        }
        return ans;
    }
};