class Solution {
public:
    int singleNumber(vector<int>& nums) {
      unordered_map<int, int> size;

      for(int n:nums)
      {
        size[n]++;
      }

      for(auto x : size) {
    if(x.second == 1)
        return x.first;
}  
    }
};
