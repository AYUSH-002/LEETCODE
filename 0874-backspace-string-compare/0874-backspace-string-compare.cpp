class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        vector<char>S;
        vector<char>T;
        for(int i=0;i<s.size();i++)
        {
            if(S.size()>0 && s[i]=='#')
                S.pop_back();
            else if(S.size()==0 && s[i]=='#')
               continue;
            else
                S.push_back(s[i]);
        }
        for(int i=0;i<t.size();i++)
        {
            if(T.size()>0 && t[i]=='#')
                T.pop_back();
            else if(T.size()==0 && t[i]=='#')
               continue;
            else
                T.push_back(t[i]);
        }
        if(S==T)
        {
            return true;
        }
        return false;
    }
};