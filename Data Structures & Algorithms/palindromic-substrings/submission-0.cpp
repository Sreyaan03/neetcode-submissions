class Solution {
public:
    int countSubstrings(string s) {
     int pal_count=0;
     int size=s.size();
     //pal_count=pal_count;
     vector<vector<bool>> dp(size,vector<bool>(size,false));

     for(int i=size-1;i>=0;i--)
     {
        for(int j=i;j<size;j++)
        {
            if(s[i]==s[j] && ((j-i)<=2 || dp[i+1][j-1]))
            {
              pal_count++;
              dp[i][j]=true;  
            }
        }
     }

     return pal_count;
        
    }
};
