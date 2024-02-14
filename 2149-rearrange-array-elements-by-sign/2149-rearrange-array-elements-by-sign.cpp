static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>pos;
        vector<int>neg;
        vector<int>ans;
        if(n==2)
        {
            if(nums[0]>0)
            {
                return nums;
            }
            else
            {
                swap(nums[0],nums[1]);
                return nums;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                pos.push_back(nums[i]);
            }
            else
            {
                neg.push_back(nums[i]);
            }
        }
        // for(int i=0;i<n/2;i++)
        // {
        //     cout<<pos[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=0;i<n/2;i++)
        // {
        //     cout<<neg[i]<<" ";
        // }
        // cout<<endl;
        for(int i=0;i<n/2;i++)
        {
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }
        // for(int i=0;i<n-1;i++)
        // {
        //     if(nums[i]>0 && nums[i+1]<0)
        //     {
        //         ans.push_back(nums[i]);
        //         ans.push_back(nums[i+1]);
        //         i=i+2;
        //     }
        //     else if(nums[i]<0 && nums[i+1]>0)
        //     {
        //         swap(nums[i],nums[i+1]);
        //         ans.push_back(nums[i]);
        //         ans.push_back(nums[i+1]);
        //         i=i+2;
        //     }
        //     else if(nums[i]<0 && nums[i+1]<0)
        //     {
        //         int k=find(nums.begin(), nums.end(),nums[i]>0);
        //         swap(nums[i],nums[k]);
        //         ans.push_back(nums[i]);
        //         ans.push_back(nums[i+1]);
        //         i=i+2;
        //     }
        //     else
        //     {
        //         int k=find(nums.begin(), nums.end(),nums[i]<0);
        //         swap(nums[i+1],nums[k]);
        //         ans.push_back(nums[i]);
        //         ans.push_back(nums[i+1]);
        //         i=i+2;
        //     }
        // }
        // for(int i=0;i<n;i++)
        // {
        //     cout<<ans[i]<<" ";
        // }
        return ans;
    }
};