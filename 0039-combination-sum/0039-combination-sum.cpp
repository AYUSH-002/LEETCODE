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

    void solution(vector<int>&candidates,int target,int start)
    {
        if(target==0)
        {
            result.push_back(current);
            return;
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
                solution(candidates,target-candidates[i],i);
                current.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        solution(candidates,target,0);
        return result;
    }
};