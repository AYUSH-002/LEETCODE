class Solution {
public:
    bool find132pattern(vector<int>& nums) 
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
        int mini=INT_MIN;
        stack<int>s;
        int n=nums.size();
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]<mini)
            {
                return true;
            }
            else
            {
                while(!s.empty() && nums[i]>s.top())
                {
                    mini=max(mini,s.top());
                    s.pop();
                }
            }
            s.push(nums[i]);
        }
        return false;
    }
};