static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>solution;
        int n=nums1.size();
        int m=nums2.size();
        for(int i=0;i<n;i++)
        {
            stack<int>temp;
            for(int j=0;j<m;j++)
            {
                temp.push(nums2[j]);
            }
            int maxR=INT_MIN;
            while(temp.top()!=nums1[i])
            {
                if(temp.top()>nums1[i]) maxR=temp.top();
                temp.pop();
            }
            maxR!=INT_MIN ? solution.push_back(maxR):solution.push_back(-1);
        }
        return solution;
    }
};