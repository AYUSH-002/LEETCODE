class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n=nums.size();
        vector<int>res=nums;
        sort(res.begin(),res.end());
        int i=n-1;
        int j=(n-1)/2;
        for(int k=0;k<n;k+=2)
        {
            nums[k]=res[j--];
        }
        for(int k=1;k<n;k+=2)
        {
            nums[k]=res[i--];
        }
    }
};