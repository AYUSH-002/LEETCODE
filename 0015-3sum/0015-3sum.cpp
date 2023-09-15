class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    for (auto fst = nums.begin(); fst != nums.end(); fst++)
    {
      auto snd = fst + 1;
      auto trd = nums.end() - 1;
      while (snd < trd)
      {
        auto sum = *fst + *snd + *trd;
        if (sum > 0) trd--;
        else if (sum < 0) snd++;
        else
        {
          res.push_back( { *fst, *snd, *trd } );

          while (snd < trd && *snd == *(snd + 1)) snd++;
          while (snd < trd && *trd == *(trd - 1)) trd--;

          snd++;
          trd--;
        }
      }

      while (fst < (nums.end() - 1) && *fst == *(fst + 1)) fst++;
    }

    return res;
    }
};