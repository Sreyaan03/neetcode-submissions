class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     if (nums.empty()) return 0;
     sort(nums.begin(), nums.end());
     nums.erase(unique(nums.begin(), nums.end()), nums.end());
     int k = nums.size();
     int count = 1, x = 0, max_count = 1;
     while(x < k - 1)
     {
      if(nums[x+1] == nums[x] + 1)
      {
        count = count + 1;
      } else {
        count = 1;
      }
      max_count = max(max_count, count);
      x++;

     
     
    }
    return max_count;
    }
};
