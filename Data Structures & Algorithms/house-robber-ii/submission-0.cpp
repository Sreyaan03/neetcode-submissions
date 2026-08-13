class Solution {
public:
    int solve(vector<int>& nums,int start,int end) {
      int prev1=0;
      int prev2=0;
      int curr=0;
      for(auto i=start;i<=end;i++)
      {
         curr=max(prev1,prev2+nums[i]);
         prev2=prev1;
         prev1=curr;
      }
      return curr;  
    }


    int rob (vector<int>& nums)
    {
        if(nums.size()==1)
        return nums[0];

        return max(solve(nums,0,nums.size()-2)
        , solve(nums,1,nums.size()-1));
    }
};
