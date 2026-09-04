class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        if(target < matrix[0][0])
            return false;

        int row = -1;

        for(int i = 0; i < matrix.size(); i++)
        {
            if(matrix[i][0] <= target)
                row = i;
            else
                break;
        }

        int front = 0;
        int back = matrix[row].size() - 1;

        while(front <= back)
        {
            int mid = front + (back - front) / 2;

            if(matrix[row][mid] == target)
                return true;

            if(target > matrix[row][mid])
                front = mid + 1;
            else
                back = mid - 1;
        }

        return false;
    }
};