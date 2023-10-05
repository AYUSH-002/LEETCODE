class Solution {
 public:
  bool winnerOfGame(string colors) {
      ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
      int n=colors.size();
      int resA=0;
      int resB=0;
      for(int i=1;i<n-1;i++)
      {
          if(colors[i]==colors[i-1] && colors[i]==colors[i+1])
          {
              if(colors[i]=='A')
              {
                  resA++;
              }
              else
              {
                  resB++;
              }
          }
      }
      return resA>resB ? true:false;
  }
};
