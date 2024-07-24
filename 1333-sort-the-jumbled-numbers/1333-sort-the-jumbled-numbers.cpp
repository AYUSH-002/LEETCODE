static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        for(int i=0;i<10;i++)
        {
            mp[i]=mapping[i];
        }
        vector<pair<int,int>>sol;
        for(int i=0;i<n;i++)
        {
            string num=to_string(nums[i]);
            int newNum=0;
            int m=num.size()-1;
            for(int j=0;j<num.size();j++)
            {
                int t=mp[num[j]-'0'];
                newNum+=(pow(10,m)*t);
                m--;
            }
            pair<int,int>p;
            p.first=newNum;
            p.second=nums[i];
            sol.push_back(p);
        }
        stable_sort(sol.begin(), sol.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.first < b.first; 
        });
        for(int i=0;i<sol.size();i++)
        {
            nums[i]=sol[i].second;
        }
        return nums;
    }
};