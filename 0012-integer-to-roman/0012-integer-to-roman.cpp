class Solution {
public:
    string intToRoman(int num) 
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);
        const vector<pair<int, string>> valueSymbols{
        {3000, "MMM"},{2000, "MM"},{1000, "M"}, {900, "CM"},{800, "DCCC"},{700, "DCC"},{600, "DC"}, {500, "D"}, {400, "CD"},{300, "CCC"},{200, "CC"}, {100, "C"},{90, "XC"},{80, "LXXX"},{70, "LXX"},{60, "LX"},  {50, "L"},   {40, "XL"},{30, "XXX"},{20, "XX"}, {10, "X"},   {9, "IX"},{8, "VIII"},{7, "VII"},{6, "VI"},{5, "V"},{4, "IV"},{3,"III"},{2,"II"},{1, "I"}};
        vector<int>arr;
        string ans="";
        while(num>0)
        {
            int digit=num%10;
            arr.push_back(digit);
            num=num/10;
        }
        int n=arr.size();
        for(int i=n-1;i>=0;i--)
        {
            int d=arr[i]*pow(10,i);
            cout<<d<<" ";
            for(int j=0;j<valueSymbols.size();j++)
            {
                if(d==valueSymbols[j].first)
                {
                    ans+=valueSymbols[j].second;
                }

            }
        }

        return ans;
    }
};