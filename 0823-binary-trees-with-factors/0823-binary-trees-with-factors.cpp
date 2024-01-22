static int speedup = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    return 0;
}();
class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        long long int res=0;
        unordered_map<long long int,long long int>umap;
        long long int mod=1e9+7;
        for(auto it:arr)
        {
            umap[it]++;
        }
        for(int i=1;i<arr.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(arr[i]%arr[j]==0)
                {
                    long long int left=umap[arr[j]];
                    long long int right=umap[(arr[i]/arr[j])];
                    umap[arr[i]]+=(left*right)%mod;
                }
            }
        }
        for(auto x:umap)
        {
            res+=x.second;
        }
        return res%mod;

    }
};