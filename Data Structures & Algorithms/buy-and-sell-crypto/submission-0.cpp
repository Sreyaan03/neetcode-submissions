class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int output=0;
    int l=0;
    int r=1;
    while(r<prices.size())
    {
     if(prices[l]<prices[r])
     {
     int diff=prices[r]-prices[l];
     output=max(output,diff);
     }
     else {
        l=r;
     }
     r++;

    }
    return output;   
    }
};
