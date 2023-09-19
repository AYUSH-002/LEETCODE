class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(false);cin.tie(NULL) ;
        int one = 0;
        int two = 0;

        while (true){
            one = nums[nums[one]];
            two = nums[two];
            if(two == one){break;}
        }

        one = 0;
        while(true){
            one = nums[one];
            two = nums[two];
            if(one == two){return two;}
        }
    }
};