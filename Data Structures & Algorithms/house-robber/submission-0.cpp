class Solution {
public:
    int rob(vector<int>& nums) {
     int prev1=0;
     int prev2=0;
     int curr;
     for(auto money:nums)
     {
        curr=max(prev1,prev2+money);
        prev2=prev1;
        prev1=curr;
     }   

     return curr;
    }
};
