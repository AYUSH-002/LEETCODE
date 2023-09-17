class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        set<int>st;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }
        int count=st.size();
        nums.clear();
        for(auto i:st)
        {
            nums.push_back(i);
        }
        return count;
    }
};