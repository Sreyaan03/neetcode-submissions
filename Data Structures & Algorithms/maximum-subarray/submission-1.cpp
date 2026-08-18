class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int size=nums.size();
      int currentsum=nums[0];
      int maxsum=nums[0];
      for(int i=1;i<size;i++)
      {
        currentsum=max(nums[i],currentsum+nums[i]);
        maxsum=max(currentsum,maxsum);
      }
      return maxsum;
    }
};
