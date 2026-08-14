class Solution {
public:
    int numDecodings(string s) {
        int x=0;
        if(s[0]=='0'||s.empty())
        return 0;
        int size=s.size();
        vector<int> dp(size+1,0);

        dp[0]=1;
        dp[1]=1;
        

        for(int i=2;i<=size;i++)
        {
            int oneDigit=s[i-1]-'0';
            if(oneDigit>=1 && oneDigit<=9)
            {
                dp[i]+=dp[i-1];
            }
            int twoDigits = stoi(s.substr(i - 2, 2));
            if (twoDigits >= 10 && twoDigits <= 26) {
                dp[i] += dp[i - 2];
            }
        

        }
        return dp[size];
    }
};
