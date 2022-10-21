class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        queue<pair<int,int>> q;
        for(int j = 0 ; j<m;j++) 
        {
            if(!vis[0][j] && grid[0][j] == 1) 
            {
                q.push({0,j});
                vis[0][j]=1;
            }
            
            if(!vis[n-1][j] && grid[n-1][j] == 1) 
            {
                q.push({n-1,j});
                vis[n-1][j]=1;
            }
        }
        
        for(int i = 0;i<n;i++) 
        {
            if(!vis[i][0] && grid[i][0] == 1) 
            {
                q.push({i,0});
                vis[i][0]=1;
            }
            
            if(!vis[i][m-1] && grid[i][m-1] == 1) 
            {
                q.push({i,m-1});
                vis[i][m-1]=1;
            }
        }
        int dRow[4]={-1,0,1,0};
        int dCol[4]={0,-1,0,1};
        while(!q.empty())
        {
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int e=0;e<4;e++)
            {
                int nRow=r+dRow[e];
                int nCol=c+dCol[e];
                if(nRow>=0 && nRow<n && nCol>=0 && nCol<m && vis[nRow][nCol]==0 && grid[nRow][nCol]==1) 
                {
                    q.push({nRow,nCol});
                    vis[nRow][nCol]=1;
                }
            }
        }
        int cnt=0;
        for(int e=0;e<n;e++)
        {
            for(int f=0;f<m;f++)
            {
                if(vis[e][f]==0 && grid[e][f]==1) cnt++;
            }
        }
        return cnt;
    }
};
