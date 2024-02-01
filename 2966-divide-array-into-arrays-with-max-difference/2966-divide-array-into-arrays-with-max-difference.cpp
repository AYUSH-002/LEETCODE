static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
      
        vector<int>vec;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());

        if (nums.size() % 3 != 0)
            return {};

        vec.push_back(nums[0]);
        for(int i=1;i<=nums.size();i++)
        {
            if(vec.size()<3 && nums[i]-vec[0]>k){
                return {};
            }
            else if(vec.size()<3 && nums[i]-vec[0]<=k){
                vec.push_back(nums[i]);
            }
            else if(vec.size()==3)
            {
                    ans.push_back(vec);
                    vec.clear();
                    vec.push_back(nums[i]);
            }  
        }
        return ans;
    }
};