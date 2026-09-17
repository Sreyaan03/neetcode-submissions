class Solution {
public:
    vector<string> res;
    vector<string> digitToChar = {"","","abc","def","ghi","jkl","mno",
    "pqrs","tuv","wxyz"};

    void backtrack(string curStr,string &digits,int i)
    {
      if(curStr.size()==digits.size())
      {
        res.push_back(curStr);
        return;
      }  
      string chars=digitToChar[digits[i]-'0'];
      for(char c:chars)
      {
        backtrack(curStr+c,digits,i+1);
      }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return res;
        backtrack("",digits,0);
        return res;
    }
};
