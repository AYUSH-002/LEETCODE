class Solution {
public:
    bool find132pattern(vector<int>& nums) 
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
        /*what we are doing here is we are taking and empty stack and a min element then we are going from last to first in array and now we are checking if nums[i] less than min or not this will come into picture as we found the other two  now when while conditions matched we got our second element and we only want one less now so now if comes to picture*/
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