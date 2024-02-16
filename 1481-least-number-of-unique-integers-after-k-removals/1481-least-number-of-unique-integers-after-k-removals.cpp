static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution 
{
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) 
    {
        map <int, int> mp;
        for(int i = 0; i < arr.size(); i++)
        {
            mp[arr[i]]++;
        }    
        vector < pair <int, int> > res;
        for(auto it : mp)
        {
            res.push_back({it.second, it.first});
        }
        sort(res.begin(), res.end());
        int count = 0;
        for(int i = 0; i < res.size(); i++)
        {
            if(res[i].first <= k)
            {
                k -= res[i].first;
                count++;
            }
            else
            {
                break;
            }
        }
        return res.size() - count;
    }
};