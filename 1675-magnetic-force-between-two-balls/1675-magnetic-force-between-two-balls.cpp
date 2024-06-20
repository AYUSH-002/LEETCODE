class Solution {
public:
    bool check(vector<int>& pos,int val,int n,int m){
        int temp=pos[0];
        for(int i=1;i<n;i++){
            if(temp+val<=pos[i]){
                m--;
                temp=pos[i];
            }
        }
        if(m<=1) return true;
        return false;
    }
    int maxDistance(vector<int>& pos, int m) {
        int n=pos.size();
        sort(pos.begin(),pos.end());
        int ans=1,low=1,high=pos[n-1]-pos[0];
        while(low<=high){
            int mid=(low+high)/2;
            bool temp=check(pos,mid,n,m);
            if(temp){
                ans=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        return ans;
    }
};