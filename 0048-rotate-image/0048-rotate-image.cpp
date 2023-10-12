class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        int n=matrix.size();
        vector<vector<int>>arr(n,vector<int>(n));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                arr[i][j]=matrix[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                arr[i][j]=matrix[j][i];
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            { 
                matrix[i][j]=arr[i][n-1-j];
            }
        }
        //better approach
        // for(int i=0;i<n-1; i++)
        // {
        //     for(int j=i+1; j<n; j++)
        //     {
        //      swap(matrix[i][j],matrix[j][i]);
        //     }
        // }

        // for(int i=0; i<n; i++)
        // {
        //     reverse(matrix[i].begin(),matrix[i].end());
        // }
         
    }
};