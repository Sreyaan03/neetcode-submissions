class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       priority_queue<int,vector<int>,greater<int>> pd;
       for(int num:nums) {
        pd.push(num);
       

       if(pd.size()>k){
        pd.pop();
       }
       }
       return pd.top();
    }
};
