class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> count;

        for(auto a:nums)
        {
        count[a]++;
        
            if(count[a]==2)
            return a;

            
        }
        return -1;
    }
};
