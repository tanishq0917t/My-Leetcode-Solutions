class Solution 
{
public:
    void dfs(int r,int c,vector<vector<int>> &vis,vector<vector<char>> mat)
    {
        int n=mat.size();
        int m=mat[0].size();
        vis[r][c]=1;
        int dRow[4]={-1,0,1,0};
        int dCol[4]={0,-1,0,1};
        for(int e=0;e<4;e++)
        {
            int nRow=r+dRow[e];
            int nCol=c+dCol[e];
            if(nRow>=0 && nRow<n && nCol>=0 && nCol<m && mat[nRow][nCol]=='O' && vis[nRow][nCol]==0)
            {
                dfs(nRow,nCol,vis,mat);
            }
        }
    }
    void solve(vector<vector<char>>& mat) 
    {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int j = 0 ; j<m;j++) 
        {
            if(!vis[0][j] && mat[0][j] == 'O') 
            {
                dfs(0, j, vis, mat); 
            }
            
            if(!vis[n-1][j] && mat[n-1][j] == 'O') 
            {
                dfs(n-1,j,vis,mat); 
            }
        }
        
        for(int i = 0;i<n;i++) 
        {
            if(!vis[i][0] && mat[i][0] == 'O') 
            {
                dfs(i, 0, vis, mat); 
            }
            
            if(!vis[i][m-1] && mat[i][m-1] == 'O') 
            {
                dfs(i, m-1, vis, mat); 
            }
        }
        for(int e=0;e<n;e++)
        {
            for(int f=0;f<m;f++)
            {
                if(vis[e][f]==0 && mat[e][f]=='O') mat[e][f]='X';
            }
        }
    }
};
