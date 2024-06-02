class Solution {
public:
    int minimumChairs(string s) {
        int res = 0;
        int temp = 0;

        for (char x : s) {
            if (x == 'E') {
                temp++;
                res=max(temp,res);
            } 
            else if (x == 'L') {
                temp--;
            }
        }
        return res;
    }
};