class Solution {
public:
    vector<vector<int>> result;
    vector<int> current;
    void backtrack(vector<int>& candidates,int total,int target,int index)
    {
        if(total==target)
        {
        result.push_back(current);
        return;
        }
        if(total>target)
        return;

        for(int i=index;i<candidates.size();i++)
        {
            if(i>index && candidates[i]==candidates[i-1])
            continue;
            current.push_back(candidates[i]);
            backtrack(candidates,total+candidates[i],target,i+1);
            current.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        sort(candidates.begin(),candidates.end());
        backtrack(candidates,0,target,0);
        return result;

        
    }
};
