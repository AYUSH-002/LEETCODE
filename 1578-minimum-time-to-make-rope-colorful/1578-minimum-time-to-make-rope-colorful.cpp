class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int cnt=0;
        int we=0;
        int size=colors.size();
        if(size==1){return 0;}
        while(we<size)
        {
            if(colors[we]==colors[we+1])
            {
                int maxi=neededTime[we];
                cnt+=neededTime[we];
                while(colors[we]==colors[we+1] && we<size)
                {
                    we++;
                    maxi=max(maxi,neededTime[we]);
                    cnt+=neededTime[we];
                }
                cnt=cnt-maxi;
            }
            we++;
        }

        return cnt;
        
    }
};