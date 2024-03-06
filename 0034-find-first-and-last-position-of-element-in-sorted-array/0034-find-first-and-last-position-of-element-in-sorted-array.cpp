class Solution {
 public:
  vector<int> searchRange(vector<int>& nums, int target) {
      ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
    const int low = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    if (low== nums.size() || nums[low] != target)
      return {-1, -1};
    const int high = upper_bound(nums.begin(), nums.end(), target) - nums.begin() - 1;
    return {low, high};
  }};
// };class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int n=nums.size();
//         vector<int>res;
//         int low=0;
//         int high=n-1;
//         if(n==1)
//         {
//             if(nums[0]==target)
//             {
//                 res.push_back(0);
//                 res.push_back(0);
//             }
//             else
//             {
//                 res.push_back(-1);
//                 res.push_back(-1);
//             }
//         }
//         while(low<=high)
//         {
//             if(nums[low]==target)
//             {
//                 res.push_back(low);
//                 low++;
//                 continue;
//             }
//             if(nums[high]==target)
//             {
//                 res.push_back(high);
//                 high--;
//                 continue;
//             }  
//             if(nums[low]<target)
//             {
//                 low++;
//             }
//             if(nums[high]>target)
//             {
//                 high--;
//             }
            
//         }
//         if(res.size()==0)
//         {
//             res.push_back(-1);
//             res.push_back(-1);
//         }
//         if(res.size()==1)
//         {
//             res.push_back(res[0]);
//         }
//         int a=res[res.size()-1];
//         while(res.size()!=1)
//         {
//             res.pop_back();
//         }
//         res.push_back(a);
//         if(res[0]>res[1])
//         {
//             swap(res[0],res[1]);
//         }
//         return res;
//     }
// };