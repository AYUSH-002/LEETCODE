// static int speedup = []() {
// 	ios::sync_with_stdio(false);
// 	cin.tie(nullptr);
// 	cout.tie(0);
// 	return 0;
// }();
// class Solution {
// public:
//     int solve(int i,vector<int>& nums,vector<int>& dp)
//     {
//         int n=nums.size();
//         if(i==n) return 0;
//         if(dp[i]!=-1) return dp[i];
//         int count=1;
//         for(int j=i;j<n;j++)
//         {
//             if(nums[i]<nums[j])
//             {
//                 count=max(count,1+solve(j,nums,dp));
//             }
//         }
//         return dp[i]=count;
//     }
//     int lengthOfLIS(vector<int>& nums) {
//         int n = nums.size();
//         int maxLength = 0;
//         vector<int> dp(n, -1);
//         for (int i = 0; i < n; i++) {
//             maxLength=max(maxLength,solve(i,nums,dp));
//         }
//         return maxLength;
//     }
// };
static int speedup = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    return 0;
}();

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        vector<int> dp(n, 1);

        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] > nums[j]) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }

        return *max_element(dp.begin(), dp.end());
    }
};





