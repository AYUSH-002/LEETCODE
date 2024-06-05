class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>solution(n,-1);
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n+i;j++)
            {
                if(nums[j%n]>nums[i])
                {
                    solution[i]=nums[j%n];
                    break;
                }
            }
        }
        return solution;
    }
};