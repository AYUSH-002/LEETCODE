class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int i = s.length() - 1;
        while (i >= 0 && s[i] == ' ')
        {
            --i;
        }
        int count=0;
        for(int j=i;j>=0;j--)
        {
            if(s[j]==' ')
            {
                break;
            }
            count++;
        }
        return count;
    }
};