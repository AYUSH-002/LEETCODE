static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        for(int i = 0; i < l.size(); i++)
        {
            int low = l[i], high = r[i];
            vector<int>t;

            for(int j = low; j <= high; j++)
            t.push_back(nums[j]);
            
            sort(t.begin(), t.end());
            int diff = t[1] - t[0];

            bool found = 1;
            for(int j = 1; j < t.size(); j++)
            {
                if(t[j] - t[j - 1] != diff) 
                {
                    found = 0;
                    break;
                }
            }
            ans.push_back(found);
        }
        return ans;
    }
};