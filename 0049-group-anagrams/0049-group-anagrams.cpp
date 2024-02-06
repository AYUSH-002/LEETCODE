static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        int n=strs.size();
        vector<vector<string>>ans;
        if(n==0 || n==1)
        {
            vector<string>s;
            if(n==0)
            {
            s.push_back("");
            }
            if(n==1)
            {
            s.push_back(strs[0]);
            }
            ans.push_back(s);
            return ans;
        }
        vector<string>arr=strs;
        map<string,vector<int>>mp;
        for(int i=0;i<n;i++)
        {
            sort(arr[i].begin(),arr[i].end());
            mp[arr[i]].push_back(i);
        }
        for(auto x:mp)
        {
            int m=x.second.size();
            vector<string>res;
            for(int i=0;i<m;i++)
            {
                res.push_back(strs[x.second[i]]);
            }
            ans.push_back(res);
        }
        return ans;
    }
};