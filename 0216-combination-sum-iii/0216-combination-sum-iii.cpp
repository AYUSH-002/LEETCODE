static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<int>current;
    vector<vector<int>>result;
    bool allDiff(vector<int>&curr)
    {
        map<int,int>mp;
        for(const int c:curr)
        {
            mp[c]++;
        }
        for(auto x:mp)
        {
            if(x.second>1)
            {
                return false;
            }
        }
        return true;
    }
    void solution(int k,vector<int>&candidates,int target,int start)
    {
        if(target==0 && current.size()==k)
        {
            if(allDiff(current))
            {
                result.push_back(current);
                return;
            }
        }
        else if(target<0)
        {
            return;
        }
        else
        {
            for(int i=start;i<candidates.size();i++)
            {
                current.push_back(candidates[i]);
                solution(k,candidates,target-candidates[i],i);
                current.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int target) 
    {
        vector<int> candidates;
        for (int i = 1; i <= 9; ++i) {
            candidates.push_back(i);
        }
        solution(k,candidates,target,0);
        return result;
    }
};