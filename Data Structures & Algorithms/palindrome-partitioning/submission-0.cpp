class Solution {
public:
     vector<vector<string>> result;
     vector<string> curr;
     bool is_palindrome(string s)
     {
        int len=s.size();
        int l=0;
        int r=len-1;
        while(l<r)
        {
            if(s[l]==s[r])
            { 
                l++;
                r--;

            }
            else
            return false;
        }

        return true;
     }

     void backtrack(string s,int index)
     {
        if(index==s.size())
        {
            result.push_back(curr);
            return;
        }

        for(int i=index;i<s.size();i++)
        {
            string sub=s.substr(index,i-index+1);
            if(!is_palindrome(sub))
            continue;

            curr.push_back(sub);
            backtrack(s,i+1);
            curr.pop_back();
        }
     }


    
    vector<vector<string>> partition(string s) {
        backtrack(s,0);
        return result;
        
    }
};
