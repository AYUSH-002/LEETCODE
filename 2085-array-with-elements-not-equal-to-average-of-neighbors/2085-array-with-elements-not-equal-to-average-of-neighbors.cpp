class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
        int n=nums.size();
        vector<int>res=nums;
        sort(res.begin(),res.end());
        int i=n-1;
        int j=(n-1)/2;
        for(int k=0;k<n;k+=2)
        {
            nums[k]=res[j--];
        }
        for(int k=1;k<n;k+=2)
        {
            nums[k]=res[i--];
        }
        return nums;
    }
};