static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int n=img.size();
        int m=img[0].size();
        vector<vector<int>>res(n,vector<int>(m,-1));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               int count=0;
               int totalSum=0;
               for(int x=max(0,i-1);x<=min(i+1,n-1);x++)
               {
                   for(int y=max(0,j-1);y<=min(j+1,m-1);y++)
                   {
                       count++;
                       totalSum+=img[x][y];
                   }
               }
               res[i][j]=totalSum/count;
            }
        }
        return res;
    }
};