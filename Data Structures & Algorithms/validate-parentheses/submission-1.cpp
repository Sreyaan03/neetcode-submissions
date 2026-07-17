class Solution {
public:
    bool isValid(string s) {
    stack<char> t;
    char k;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
        {
            t.push(s[i]);
        }
        if (t.empty())
        return false;
        else if(s[i]==')'||s[i]=='}'||s[i]==']')
        {
            k=t.top();
            if(k=='{' && s[i]=='}')
            t.pop();
            else if(k=='[' && s[i]==']')
            t.pop();
            else if(k=='(' && s[i]==')')
            t.pop();
            else
            return false;
            
        }

    }
    if(t.empty())
    return true;
    else
    return false;
    }
};
