class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int one=0;
        int two=0;
        while(true)
        {
            one=nums[nums[one]];
            two=nums[two];
            if(one==two)break;
        } 
        one=0;
        while(true)
        {
            one=nums[one];
            two=nums[two];
            if(one==two) return one;
        } 
    }
};