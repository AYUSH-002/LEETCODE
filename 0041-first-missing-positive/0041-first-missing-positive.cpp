class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        int n=nums.size();
        vector<bool>checker(n+1,false);    
        for(int i=0;i<n;i++)
        {
            if(nums[i]<n+1 && nums[i]>0)
            {
                checker[nums[i]]=true;
            }
        }
        for(int i=1;i<n+1;i++)
        {
            if(checker[i]==false){return i;}
        }
        return n+1;
    }
};