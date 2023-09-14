class Solution {
public:
    int romanToInt(string str) {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        int sum=0;
        int n=str.length();
        map<char, int>roman= {{'I', 1}, {'V', 5},{'X', 10},{'L', 50},{'C', 100},{'D', 500},
        {'M', 1000}};
        for(int i=0;i<n;i++)
        {
            if(roman[str[i+1]]<=roman[str[i]])
            {
                sum+=roman[str[i]];
            }
            else
            {
                sum-=roman[str[i]];
            }
        }
        return sum;  
    }
};