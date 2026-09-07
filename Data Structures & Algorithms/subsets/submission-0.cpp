class Solution {
public:
    vector<vector<int>> result;
    vector<int> current;

    void backtrack(vector<int>& nums,int index)
    {
        result.push_back(current);
        for(int i=index;i<nums.size();i++)
        {
            current.push_back(nums[i]);
            //exploring
            backtrack(nums,i+1);
            //undo
            current.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        backtrack(nums,0);
        return result;
    }
};
