class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //unordered_map<char,int> letter;
        for(int i=0;i<strs[0].length();i++)
        {

        for(const string& s:strs) {
            if(i==s.length() || s[i]!=strs[0][i]) {
                return s.substr(0,i);
            }
        }
        }
        return strs[0];
    }
};