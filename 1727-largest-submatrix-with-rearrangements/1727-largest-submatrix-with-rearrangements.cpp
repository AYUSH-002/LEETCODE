class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& mat) {
        ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
        int r=mat.size(),c=mat[0].size();
        int ans=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(mat[i][j]!=0 and i!=0)
                mat[i][j]+=mat[i-1][j];
            }
            vector<int>temp=mat[i];
            sort(temp.begin(),temp.end(),greater());
            for(int j=0;j<c;j++){
                ans=max(ans,temp[j]*(j+1));
            }
        }
        return ans;
    }
};