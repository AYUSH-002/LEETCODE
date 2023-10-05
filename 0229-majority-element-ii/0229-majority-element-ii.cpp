class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> umap;
        int n = nums.size();
        for(auto i:nums){
            umap[i]++;
        }

        vector<int> res;
        int x = floor(n/3);
        for(auto i:umap){
            if(i.second > x){
                res.push_back(i.first);
            }
        }

        return res;
    }
};