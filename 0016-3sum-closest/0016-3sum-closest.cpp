class Solution {
public:
    int threeSumClosest(vector<int>& num, int target) {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        int ans=INT_MAX;
        sort(num.begin(), num.end());
        int i, j, k;
        int n = num.size();
        for (i = 0; i < n - 2; i++) {
            j = i+1;
            k = n-1;
            while (j < k) {
                int sum = num[i] + num[j] + num[k];
                ans=min(ans,sum);
                if (sum == target) {
                    return sum;
                } 
                else if (sum > target) 
                {
                    if(abs(sum-target)<=abs(ans-target))
                    {
                        ans=sum;
                    }
                    k--;
                } else if (sum < target) {
                    if(abs(sum-target)<=abs(ans-target))
                    {
                        ans=sum;
                    }
                    j++;
                }
            }
        }
        return ans;
    }
};