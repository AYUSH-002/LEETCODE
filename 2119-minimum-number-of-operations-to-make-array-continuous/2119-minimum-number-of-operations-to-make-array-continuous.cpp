class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>ans;
        ans.push_back(nums[0]);
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]) ans.push_back(nums[i]);
        }
        int res=n,j=0,m=ans.size();
        for(int i=0;i<m;i++){
            while(j<m && ans[j]<ans[i]+n) j++;
            int window=j-i;
            res=min(res,n-window);
        }
        return res;
    }
};