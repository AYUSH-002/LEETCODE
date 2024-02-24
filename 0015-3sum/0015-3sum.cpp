class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& num) 
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        //my approach
        set<vector<int> >rs;
        sort(num.begin(), num.end());
        int i, j, k;
        int n = num.size();
        for (i = 0; i < n - 2; i++) {
            j = i+1;
            k = n-1;
            while (j < k) {
                int sum = num[i] + num[j] + num[k];
                if (sum == 0) {
                    vector<int> tmp(3);
                    tmp[0] = num[i];
                    tmp[1] = num[j];
                    tmp[2] = num[k];
                    rs.insert(tmp);
                    j++;
                    k--;
                } else if (sum > 0) {
                    k--;
                } else if (sum < 0) {
                    j++;
                }
            }
        }
        vector<vector <int> >result (rs.begin(), rs.end());
        return result;
        //best approach
    //     vector<vector<int>> res;
    // sort(nums.begin(), nums.end());
    // for (auto fst = nums.begin(); fst != nums.end(); fst++)
    // {
    //   auto snd = fst + 1;
    //   auto trd = nums.end() - 1;
    //   while (snd < trd)
    //   {
    //     auto sum = *fst + *snd + *trd;
    //     if (sum > 0) trd--;
    //     else if (sum < 0) snd++;
    //     else
    //     {
    //       res.push_back( { *fst, *snd, *trd } );

    //       while (snd < trd && *snd == *(snd + 1)) snd++;
    //       while (snd < trd && *trd == *(trd - 1)) trd--;

    //       snd++;
    //       trd--;
    //     }
    //   }

    //   while (fst < (nums.end() - 1) && *fst == *(fst + 1)) fst++;
    // }

    // return res;
    }
};