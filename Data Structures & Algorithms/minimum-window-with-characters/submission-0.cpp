class Solution {
public:
    string minWindow(string s, string t) {
     unordered_map<char,int> freq,subfreq;
     int start=0,minlen=INT_MAX;
     int formed=0;
     int l=0;
     for(int i=0;i<t.length();i++)
     {
        subfreq[t[i]]++;
     }
     int req=subfreq.size();
     for(int r=0;r<s.length();r++)
     {
        freq[s[r]]++;
        if(subfreq.find(s[r])!=subfreq.end() && freq[s[r]] == subfreq[s[r]])
        {
            formed++;
        }
        while(formed==req)
        {
            int len = r-l+1;
            if(len<minlen)
            {
                minlen=len;
                start=l;

            }
            freq[s[l]]--;
            if(subfreq.find(s[l])!=subfreq.end() && freq[s[l]] < subfreq[s[l]])
            {
                formed--;
            }
            l++;
        }
     }
     if (minlen == INT_MAX)
     return "";

     return s.substr(start, minlen); 
    }
};
