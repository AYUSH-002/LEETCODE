class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int ans = 0;
    int l = 0;
    int r = height.size() - 1;

    while (l < r) {
      ans = max(ans, min(height[l], height[r]) * (r - l));
      if (height[l] < height[r])
      {
        ++l;
        continue;
      }
      else
        --r;
    }

    return ans;
        // int n=height.size();
        // int ans=0;
        // int sum1=0;
        // int sum2=0;
        // int sum3=0;
        // int i1=0;
        // int i1d=0;
        // int i2=0;
        // int largest = height[ 0 ];
        // int secLargest = -9999;
        // if(n==2)
        // {
        //     return height[0];
        // }
        // for( int i = 1; i < n; i++ ) 
        // {
        //     if( height[i] > largest )
        //     {
        //         secLargest = largest; 
        //         largest = height[ i ];
        //         i1=i;
        //     }
        //     else if(height[i]==largest)
        //     {
        //         i1d=i;
        //     }
        //     else if( secLargest < height[ i ] && height[ i ] != largest ) 
        //     {
        //         secLargest = height[ i ];
        //         i2=i;
        //     }
        // }
        // if(i1d!=0)
        // {
        // sum1=min(height[i1],height[i1d])*abs(i1d-i1);
        // sum2=min(height[i1],height[i2])*abs(i2-i1);
        // sum3=min(height[i2],height[i1d])*abs(i1d-i2);
        // // cout<<sum1<<" "<<sum2<<" "<<sum3<<" ";
        // ans=max(sum1,sum2);
        // ans=max(ans,sum3);
        // }
        // else
        // {
        //     ans=height[i2]*abs(i2-i1);
        // }
        // // cout<<i1<<" ";
        // // cout<<i1d<<" ";
        // // cout<<i2<<endl;
        
        // return ans;
    }
};