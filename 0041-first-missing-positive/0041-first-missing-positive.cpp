class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        sort(nums.begin(),nums.end());
        set<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                ans.insert(nums[i]);
            }
        }
        int count=1;
        int a;
        if(ans.size()==0)
        {
            return 1;
        }
        else
        {
        for(auto& x:ans)
        {
            if(x==count)
            {
                count++;
            }
            else
            {
                a=count;
                break;
            }
        }
        }
        return a;
    }
};