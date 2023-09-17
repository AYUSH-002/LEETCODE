class Solution {
public:
    int trap(vector<int>& arr) 
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        int n=arr.size();
        // int ans=0;
        // for(int i=1;i<n-1;i++)
        // {
        //     int left=height[i];
        //     for(int j=0;j<i;j++)
        //     {
        //         left=max(left,height[j]);
        //     }
        //     int right=height[i];
        //     for(int j=i+1;j<n;j++)
        //     {
        //         right=max(right,height[j]);
        //     }
        //     ans+=min(left,right)-height[i]; 
        // }
        // return ans;]
        if(n==0)
        {
            return 0;
        }
        int ans=0;
        int l=0;
        int r=n-1;
        int lMax=0;
        int rMax=0;
        while(l<r)
        {
            if(arr[l]>lMax)
            {
                lMax=arr[l];
            }
            if(arr[r]>rMax)
            {
                rMax=arr[r];
            }
            if(lMax<rMax)
            {
                ans+=max(0,lMax-arr[l]);
                l++;
            }
            else
            {
                ans+=max(0,rMax-arr[r]);
                r--;
            }
        }
        return ans;
    }
        
};