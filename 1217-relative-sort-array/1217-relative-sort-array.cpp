static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>result;
        int n=arr1.size();
        int m=arr2.size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr1[j]==arr2[i]) result.push_back(arr1[j]);
            }
        }
        sort(arr1.begin(),arr1.end());
        vector<int>temp;
        for(int i=0;i<n;i++)
        {
            if(find(result.begin(),result.end(),arr1[i])==result.end())
            {
                temp.push_back(arr1[i]);
            }
        }
        
        result.insert(result.end(), temp.begin(), temp.end());
        return result;
    }
};