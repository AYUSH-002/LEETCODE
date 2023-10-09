class Solution {
 public:
  vector<int> searchRange(vector<int>& nums, int target) {
      ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
    const int low = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    if (low== nums.size() || nums[low] != target)
      return {-1, -1};
    const int high = upper_bound(nums.begin(), nums.end(), target) - nums.begin() - 1;
    return {low, high};
  }
};