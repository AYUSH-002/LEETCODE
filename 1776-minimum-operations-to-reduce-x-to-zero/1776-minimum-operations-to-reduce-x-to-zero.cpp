class Solution {
public:
    int minOperations(vector<int>& nums, int x) 
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
       int totalSum=accumulate(nums.begin(),nums.end(),0);
       int reqSum=totalSum-x;
       if(reqSum<0)
       {
           return -1;
       }
       else if(reqSum==0)
       {
           return nums.size();
       }
       int low=0,high=0,res=0,sum=0;
       int n=nums.size();
       while(high<n)
       {
           sum+=nums[high];
           while(sum>reqSum)
           {
               sum-=nums[low];
               low++;
           }
           if(sum==reqSum)
           {
               res=max(res,high-low+1);
           }
           high++;
       }
        return res == 0 ? -1 : n-res;
    }
};