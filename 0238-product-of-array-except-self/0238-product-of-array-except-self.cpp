class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        int n = nums.size();
        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            ans[i] = nums[i];
        }
        for (int i = 1; i < n; i++) {
            ans[i] *= ans[i - 1];
        }
        int a=ans[n-1];
        for(int i=0;i<n;i++)
        {
            int b=1;
            if(nums[i]==0)
            {
                for(int j=0;j<i;j++)
                {
                    b*=nums[j];
                }
                for(int j=i+1;j<n;j++)
                {
                    b*=nums[j];
                }
                ans[i]=b;
            }
            else
            {
                ans[i]=a/nums[i];
            }
        }
        return ans;
    }
};