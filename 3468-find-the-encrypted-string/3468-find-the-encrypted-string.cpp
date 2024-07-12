class Solution {
public:
    string getEncryptedString(string s, int k) {
        int n=s.size();
        string solution="";
        for(int i=0;i<n;i++)
        {
            solution+=s[(i+k)%n];
        }
        return solution;
    }
};