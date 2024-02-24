static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int n=nums.size();
        if(n==0 || n==1) return n;
        int res=1;
        unordered_set<int>ans;
        for(auto num:nums)
        {
            ans.insert(num);
        }
        for(auto it:ans)
        {
            if(ans.find(it-1)==ans.end())
            {
                int temp=it;
                int currentLong=1;
                while(ans.find(temp+1)!=ans.end())
                {
                    temp++;
                    currentLong++;
                }
                res=max(currentLong,res);
            }
        }
        return res;
        // int count1=0;
        // int count2=INT_MIN;
        // map<int,int>mp;
        // for(auto num:nums)
        // {
        //     mp[num]++;
        // }
        // auto itr=mp.begin();
        // while(itr!=prev(mp.end()))
        // {
        //     int temp=(next(itr)->first-(itr)->first);
        //     if(temp==1) count1++;
        //     else
        //     {
        //         count2=max(count2,count1);
        //         count1=0;
        //     }
        //     ++itr;
        // }
        // return max(count1,count2)+1;
    }
};