class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool>result(n,false);
        int maxCandy=*max_element(candies.begin(),candies.end());
        for(int i=0;i<n;i++)
        {
            candies[i]+=extraCandies;
            if(candies[i]>=maxCandy)
            {
                result[i]=true;
            }
        }
        return result;
    }
};