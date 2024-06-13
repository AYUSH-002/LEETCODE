static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    double calculateHours(vector<int>& piles,int hourly){
    int n= piles.size();
    double totalH = 0;
    for(int i=0;i<n;i++){
        totalH = totalH + ceil((double)piles[i]/(double)hourly);
    }
    return totalH;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(calculateHours(piles,mid)<=(double)h) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};