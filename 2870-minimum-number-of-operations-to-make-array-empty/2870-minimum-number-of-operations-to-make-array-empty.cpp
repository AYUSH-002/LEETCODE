static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> umap;
        for(auto num:nums)
        {
            umap[num]++;
        }
        int res=0;
        vector<int>ans;
        for(auto x:umap)
        {
           ans.push_back(x.second);
        }
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
            if(ans[i]==1)
            {
                return -1;
            }
            if(ans[i]%3==0)
            {
                res+=ans[i]/3;
            }
            else if(ans[i]%3==1 || ans[i]%3==2)
            {
                res+=ans[i]/3;
                res++;
            }
        }
        return res;
    }
};