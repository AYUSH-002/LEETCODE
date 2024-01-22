static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        unordered_map<int,int>umap;
        set<int>s;
        for(auto num:nums)
        {
            umap[num]++;
            s.insert(num);
        }
        for(auto x:umap)
        {
            if(x.second==2)
            {
                res.push_back(x.first);
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(umap.find(i+1)==umap.end())
            {
                res.push_back(i+1);
                break;
            }
        }
        return res;
    }
};