class Solution {
public:
    bool isAnagram(string s, string t) {
      unordered_map<char,int> freq1;
      unordered_map<char,int> freq2;
       if(s.length()!=t.length())
       return false;
       for(char c:s)
       {
        freq1[c]++;
       }

       for(char k:t)
       {
        freq2[k]++;
       } 

       return freq1==freq2;
    }
};
