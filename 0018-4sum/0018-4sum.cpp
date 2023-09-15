class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        int n=nums.size();
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            continue;
            for(int j=i+1;j<n;j++)
            {
                if(j>i+1 && nums[j]==nums[j-1])
                continue;
                int p=j+1;
                int q=n-1;
                while(p<q)
                {
                    long long sum=nums[i];
                    sum+=nums[j];
                    sum+=nums[p];
                    sum+=nums[q];
                    if(sum==target)
                    {
                        vector<int>a;
                        a.push_back(nums[i]);
                        a.push_back(nums[j]);
                        a.push_back(nums[p]);
                        a.push_back(nums[q]);
                        res.push_back(a);
                        p++;
                        q--;
                        while(p<q && nums[p]==nums[p-1])
                            p++;
                        while(p<q && nums[q]==nums[q+1])
                            q--;
                    }
                    else if(sum>target)
                    {
                        q--;
                    }
                    else
                    {
                        p++;
                    }
                }
            }
        }
        return res;
    }
};