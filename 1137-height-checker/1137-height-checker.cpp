class Solution {
public:
    int heightChecker(vector<int>& heights) 
    {
        int count=0;
        vector<int>initial=heights;
        int n=heights.size();
        sort(heights.begin(), heights.end());
        for(int i=0;i<n;i++)
        {
            if(initial[i]!=heights[i])
            {
                count++;
            }
        }
        return count;
    }
};