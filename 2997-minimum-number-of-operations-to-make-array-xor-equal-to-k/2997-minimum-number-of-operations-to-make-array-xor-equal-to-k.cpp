static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public: 
    vector<int>toBits(int num)
    {
        vector<int>res;
        while(num>0)
        {
            res.push_back(num%2);
            num/=2;
        }
        reverse(res.begin(), res.end());
        return res;
    }
    int minOperations(vector<int>& nums, int k) {
        int temp=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            temp^=nums[i];
        }
        vector<int>one=toBits(temp);
        vector<int>two=toBits(k);
        int sol=0;
        if(one.size()!=two.size())
        {
            if(one.size()>two.size())
            {
            reverse(two.begin(),two.end());           
            while(one.size()!=two.size())
            {
                two.push_back(0);
            }
            reverse(two.begin(),two.end());
            }
            else
            {
            reverse(one.begin(),one.end());           
            while(one.size()!=two.size())
            {
                one.push_back(0);
            }
            reverse(one.begin(),one.end());
            }
            
        }
        for(int i=0;i<one.size();i++)
        {
            if(one[i]!=two[i])
            {
                sol++;
            }
        }
        return sol;
    }
};