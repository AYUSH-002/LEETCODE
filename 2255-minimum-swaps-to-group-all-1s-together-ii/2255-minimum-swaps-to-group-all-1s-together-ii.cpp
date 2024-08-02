class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        int count1=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count1++;
            }
        }
        if(count1==0 || count1==n){
            return 0;
        }

        vector<int> doublenums(2*n);
        for(int i=0;i<n;i++){
            doublenums[i]=doublenums[i+n]=nums[i];
        }
        int currOnes=0;
        for(int i=0;i<count1;i++){
            if(nums[i]==1) currOnes++;
        }
        int maxOnes=currOnes;
        for(int i=0;i<n;i++){
            currOnes -= doublenums[i];
            currOnes += doublenums[(i + count1)];
            if(currOnes>maxOnes) maxOnes=currOnes;
        }
        return count1-maxOnes;
    }
};