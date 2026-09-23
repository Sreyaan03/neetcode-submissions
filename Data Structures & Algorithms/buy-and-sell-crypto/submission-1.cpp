class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int mino=prices[0];
       int n=prices.size();
       int profit=0;
       for(int i=1;i<n;i++)
       {
         //while(prices[i]>mino)
         mino=min(mino,prices[i]);
         profit=max(profit,prices[i]-mino);
       } 

       return profit;
    }
};
