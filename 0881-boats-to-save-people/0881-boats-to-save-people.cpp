static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n=people.size();
        int low=0,high=n-1;
        int numOfBoats=0;
        while(low<=high)
        {
            if(people[low]+people[high]<=limit)
            {
                low++;
                high--;
                numOfBoats++;
            }
            else
            {
                high--;
                numOfBoats++;
            }
        }
        return numOfBoats;
    }
};