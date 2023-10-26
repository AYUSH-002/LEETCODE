class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        unordered_map<long long int,long long int>mp;
        long long int mod=1e9+7;
        for(auto it:arr)
            mp[it]++;
        for(int i=1;i<arr.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(arr[i]%arr[j]==0)
                {
                    long long int left=mp[arr[j]];
                    long long int right=mp[arr[i]/arr[j]];
                    mp[arr[i]]+=(left*right)%mod;
                }
            }
        }
        long long int res=0;
        for(auto it:mp)
            res=(res+it.second)%mod;
        return res%mod;
    }
};