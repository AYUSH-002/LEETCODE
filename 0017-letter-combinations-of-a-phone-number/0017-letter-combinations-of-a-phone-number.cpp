class Solution {
public:
    void generateCombinations (vector<string>& arr,string digits, int index,string ans,vector<string>&result)
    {
        if(index==digits.size())
        {
            result.push_back(ans);
            return;
        }
        string letters=arr[digits[index]-'2'];
        for(const char letter: letters)
        {
            generateCombinations(arr,digits,index+1,ans+letter,result);
        }
    }
    vector<string> letterCombinations(string digits) 
    {
        vector<string>arr={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

        vector<string> result;
        if (digits.empty()) return result;
        generateCombinations(arr, digits, 0, "", result);
        return result;
    }
};