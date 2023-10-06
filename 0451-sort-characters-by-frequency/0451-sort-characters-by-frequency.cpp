static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    string frequencySort(string s) 
    {
        unordered_map<char,int>umap;
        for(char c:s)
        {
            umap[c]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto x:umap)
        {
            pq.push({x.second,x.first});
        }
        string ans="";
        while(!pq.empty())
        {
            auto x=pq.top();
            for(int i=0;i<x.first;i++)
            {
                ans+=x.second;
            }
            pq.pop();
        }
        return ans;
    }
};