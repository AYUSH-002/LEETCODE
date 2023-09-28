class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int evenPtr = 0;
        int oddPtr = nums.size() - 1;
        while (evenPtr < oddPtr) {
            if (nums[evenPtr] % 2 == 0) {
                evenPtr++; 
            } else if (nums[oddPtr] % 2 == 1) {
                oddPtr--; 
            } else {
                swap(nums[evenPtr], nums[oddPtr]);
                evenPtr++;
                oddPtr--;
            }
        }
        return nums;
    }
};
