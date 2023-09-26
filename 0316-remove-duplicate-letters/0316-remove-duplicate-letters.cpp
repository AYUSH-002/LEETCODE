class Solution {
public:
    string removeDuplicateLetters(string s) 
    {
        int n=s.size();
        stack<char>res;
        vector<bool>visited(26,false);
        for(int i=0;i<n;i++)
        {
            if(!visited[s[i]-'a'])
            {
                while(!res.empty() && s[i]<res.top() && s.find(res.top(),i)!=string::npos)
                {
                    visited[res.top()-'a']=false;
                    res.pop();
                }
                res.push(s[i]);
                visited[s[i]-'a']=true;
            }
        }
        string ans="";
        while(!res.empty())
        {
            ans+=res.top();
            res.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};