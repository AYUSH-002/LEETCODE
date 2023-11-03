class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) 
    {
        int i=1;
        vector<string>res;
        for(int j=0;j<target.size();j++)
        {
            if(i+j==target[j])
            {
                res.push_back("Push");
            }
            else
            {
                res.push_back("Push");
                res.push_back("Pop");
                j--;
                i++;
            }
        }
        return res;
    }
};