static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int,int>umap;
        vector<int>res;
        for(auto& num:nums)
        {
            umap[num]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto& x:umap)
        {
            pq.push({x.second,x.first});
        }
        while(k>0)
        {
            auto x=pq.top();
            res.push_back(x.second);
            pq.pop();
            k--;
        }
        return res;
    }
};