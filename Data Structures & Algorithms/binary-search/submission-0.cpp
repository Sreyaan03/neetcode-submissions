class Solution {
public:
    int search(vector<int>& nums, int target) {
        int r=nums.size();
        int l=0;
        while(l<r)
        {
            int m = (l+(r-1))/2;
            if(nums[m]>=target)
            {
                r=m;
            }
            else 
            {
                l=m+1;
            }
        }
        return (l<nums.size() && nums[l]==target) ? l : -1;

        
    }
};
