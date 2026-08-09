class Solution {
public:
int ROWS,COLS;
vector<vector<bool>> visited;

bool dfs(vector<vector<char>>& board,string word,int r,int c,int i)
{
    if(word.length()==i)
    return true;

    if(r<0||c<0||r>=ROWS||c>=COLS||board[r][c]!= word[i]||visited[r][c])
    {
        return false;
    }

    visited[r][c]=true;
    bool res=dfs(board,word,r+1,c,i+1) ||
             dfs(board,word,r-1,c,i+1) ||
             dfs(board,word,r,c+1,i+1) ||
             dfs(board,word,r,c-1,i+1);
    visited[r][c]=false;

    return res;
}
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        vector<string> present;
        ROWS=board.size();
        COLS=board[0].size();
        visited=vector<vector<bool>>(ROWS,vector<bool>(COLS,false));
        int size=words.size();
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<ROWS;j++)
            {
                for(int k=0;k<COLS;k++)
                {
                    if(dfs(board,words[i],j,k,0))
                    {
                        present.push_back(words[i]);
                    }
                }
            }
        }

        return present;
    }
};
