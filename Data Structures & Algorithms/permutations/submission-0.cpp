class Solution {
public:
    vector<vector<int>> result;
    vector<int> curr;

    void backtrack(vector<int>& nums,vector<bool> used)
    {
        if(curr.size()==nums.size())
        {
        result.push_back(curr);
        return;
        }
        //if(curr.size()!=nums.size())
        //return;
        for(int i=0;i<nums.size();i++)
        {
            if(used[i])
            continue;
            curr.push_back(nums[i]);
            used[i]=true;
            backtrack(nums,used);
            //result.push_back(curr);
            used[i]=false;
            curr.pop_back();
        }
        
        

    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> used(nums.size(),false);
        backtrack(nums,used);
        return result;
    }
};
