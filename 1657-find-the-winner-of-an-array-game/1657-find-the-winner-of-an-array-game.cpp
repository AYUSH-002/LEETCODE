class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int maximum=*max_element(arr.begin(),arr.end());
        int n=arr.size();
        if(k>=n)
        {
            return maximum;
        }
        int winner=arr[0];
        int streak=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]>winner)
            {
                winner=arr[i];
                streak=1;
            }
            else
            {
                streak++;
            }
            if(winner==maximum || streak==k)
            {
                return winner;
            }
        }
        return winner;
    }
};