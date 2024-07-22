class Solution {
public:
    string decodeString(string s) {
        int n=s.size();
        stack<string>stk;
        for(int i=0;i<n;i++)
        {
            if(isdigit(s[i]))
            {
                string digit="";
                while(i < n && isdigit(s[i]))
                {
                    if(isdigit(s[i]))
                    {
                        digit+=s[i];
                    }
                    i++;
                }
                i--;
                stk.push(digit);
            }
            else if(s[i]=='[')
            {
                stk.push(string(1,'['));
            }
            else if(isalpha(s[i]))
            {
                string str="";
                while(i<n && isalpha(s[i]))
                {
                    if(isalpha(s[i]))
                    {
                        str+=s[i];
                        i++;
                    }
                }
                i--;
                stk.push(str);
            }
            else if(s[i]==']')
            {
                string repeat="";
                while (!stk.empty() && stk.top() != "[") {
                    repeat=stk.top()+repeat;
                    stk.pop();
                }
                if (!stk.empty() && stk.top() == "[") {
                    stk.pop();
                }
                int digit = stoi(stk.top());
                stk.pop();
                string temp = "";
                for (int i = 0; i < digit; i++) {
                    temp += repeat;
                }
                stk.push(temp);
            }
        }
        string result = "";
        while (!stk.empty()) {
            result = stk.top() + result;
            stk.pop();
        }
        return result;
    }
};