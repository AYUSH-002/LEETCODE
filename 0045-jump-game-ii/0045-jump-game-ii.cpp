class Solution {
public:

    int jump(vector<int>& nums) 
    {
        ios::sync_with_stdio(0); cin.tie(0);
        int n=nums.size()-1;
        int curr=-1,ans=0,next=0;
        for(int i=0;curr<n;i++)
        {
            if(i>curr)
            {
                curr=next;
                ans++;
            }
            next=max(next,nums[i]+i);
        }
        return ans-1;
    }
};