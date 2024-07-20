class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int totalSum=accumulate(nums.begin(),nums.end(),0);
        int leftSum=0;
        for(int i=0;i<n;i++)
        {
            int rightSum=(totalSum-leftSum-nums[i]);
            if(rightSum==leftSum) return i;
            leftSum+=nums[i];
        }
        return -1;
    }
};