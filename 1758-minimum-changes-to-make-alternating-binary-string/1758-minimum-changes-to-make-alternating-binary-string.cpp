class Solution {
public:
    int solution(char c,string s)
    {
        int sol=0;
        for(char x:s)
        {
            if(x!=c)
            {
                sol++;
            }
            c=(c=='0')?'1':'0';
        }
        return sol;
    }
    int minOperations(string s) {
        return min(solution('0',s),solution('1',s));
    }
};