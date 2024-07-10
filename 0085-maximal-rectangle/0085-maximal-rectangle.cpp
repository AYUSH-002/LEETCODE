static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int largestRectangleArea(vector<int>& height) {
        int n=height.size();
        vector<int>left(n);
        vector<int>right(n);
        left[0]=-1;
        right[n-1]=n;
        for(int i=1;i<n;i++)
        {
            int currentIndex=i-1;
            while(currentIndex>=0 && height[currentIndex]>=height[i])
            {
                currentIndex=left[currentIndex];
            }
            left[i]=currentIndex;
        }
        for(int i=n-2;i>=0;i--)
        {
            int currentIndex=i+1;
            while(currentIndex<n && height[currentIndex]>=height[i])
            {
                currentIndex=right[currentIndex];
            }
            right[i]=currentIndex;
        }
        int result=INT_MIN;
        for(int i=0;i<n;i++)
        {
            result=max(result,height[i]*(right[i]-left[i]-1));
        }
        return result;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0)
                {
                    dp[i][j]=matrix[i][j]-'0';
                }else if(matrix[i][j]=='1')
                {
                    dp[i][j]=dp[i-1][j]+1;
                }else
                {
                    dp[i][j]=0;
                }
            }
        }
        int maxArea=INT_MIN;
        for(int i=0;i<n;i++)
        {
            maxArea=max(maxArea,largestRectangleArea(dp[i]));
        }
        return maxArea;
    }
};