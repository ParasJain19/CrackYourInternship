class Solution {
public:
    vector<int> row={0,0,-1,1};
    vector<int> col={1,-1,0,0};
    int n,m;
    vector<vector<char>> tmp_board;
    string word_cpy;
    bool isValid(int r,int c)
    {
        if(r<0 || r>=n)
        {return false;}
        if(c<0 || c>=m)
        {return false;}
        return true;
    }
    bool dfs(int r,int c,int ptr)
    {   if(ptr==word_cpy.size())
        {
            return true;
        }
        if(!isValid(r,c) || word_cpy[ptr]!=tmp_board[r][c] || tmp_board[r][c]=='0')
        {
            return false;
        }
        char temp=tmp_board[r][c];
        tmp_board[r][c]='0';
        for(int i=0;i<4;i++)
        {
            int new_row=r+row[i];
            int new_col=c+col[i];
            if(dfs(new_row,new_col,ptr+1))
            return true;
        }
        tmp_board[r][c]=temp;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        tmp_board=board;
        word_cpy=word;
        n=board.size();
        m=board[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(dfs(i,j,0))
                return true;
            }
        }
        return false;
    }
};
