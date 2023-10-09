class Solution {
 public:
  vector<int> searchRange(vector<int>& nums, int target) {
    const int low = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    if (low== nums.size() || nums[low] != target)
      return {-1, -1};
    const int high = upper_bound(nums.begin(), nums.end(), target) - nums.begin() - 1;
    return {low, high};
  }
};