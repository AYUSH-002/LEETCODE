class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        int n=nums.size();
        vector<int> result(2);
        for(int i=0;i<n ;i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]+nums[j]==target){
                     result[0]=i;
                     result[1]=j;
                     return result;
                    
                }

            }
        }
       return result;
    }
};