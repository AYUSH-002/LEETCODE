static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) 
    {
        int n=matrix.size();//row
        int m=matrix[0].size();//column
        vector<int>lucky;
        vector<int>maxInCol(m);
        for(int j=0;j<m;j++)
        {
            int maxi=INT_MIN;
            for(int i=0;i<n;i++)
            {
                maxi=max(maxi,matrix[i][j]);
            }
            maxInCol[j]=maxi;
        }
        for(int i=0;i<n;i++)
        {
            int minInRow=*min_element(matrix[i].begin(),matrix[i].end());
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==minInRow && matrix[i][j]==maxInCol[j])
                {
                    lucky.push_back(matrix[i][j]);
                }
            }
        }
        return lucky;
    }
};