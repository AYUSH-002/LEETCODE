class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) 
    {
        int x=abs(sx-fx);
        int y=abs(sy-fy);
        if(x==0 && y==0)return t!=1;
        int res=max(x,y);
        return res<=t;
    }
};