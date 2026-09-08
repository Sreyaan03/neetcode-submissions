class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int ROWS=grid.size();int COLS=grid[0].size();
        int fresh=0;
        int time=0;
        for(int i=0;i<ROWS;i++)
        {
            for(int j=0;j<COLS;j++)
            {
                if(grid[i][j]==1)
                fresh++;
            }
        }

        vector<vector<int>> directions={{0,1},{0,-1},{1,0},{-1,0}};

        while(fresh>0)
        {
            bool flag = false;
            for(int r=0;r<ROWS;r++)
            {
                for(int c=0;c<COLS;c++)
                {
                    if(grid[r][c]==2) {
                        for(auto& d:directions){
                            int row=r+d[0],col=c+d[1];
                            if(row>=0 && col>=0 &&
                            row<ROWS && col<COLS && 
                            grid[row][col]==1) {
                                grid[row][col]=3;
                                fresh--;
                                flag=true;
                            }
                        }
                    }
                }
            }
            if(!flag) return -1;

            for(int r=0;r<ROWS;r++)
            {
                for(int c=0;c<COLS;c++)
                {
                    if(grid[r][c]==3) grid[r][c]=2;
                }
            }
            time++;
        }
        return time;

    }
};
