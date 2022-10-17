class Solution 
{
public:
    int orangesRotting(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<pair<int,int>,int>> q;
        int vis[n][m];
        for(int e=0;e<n;e++)
        {
            for(int f=0;f<m;f++)
            {
                if(grid[e][f]==2)
                {
                    q.push({{e,f},0});
                    vis[e][f]=2;
                }
                else vis[e][f]=0;
            }
        }
        int t=0;
        int row[4]={-1,0,1,0};
        int col[4]={0,1,0,-1};
        while(!q.empty())
        {
            int r=q.front().first.first;
            int c=q.front().first.second;
            int ct=q.front().second;
            t=max(t,ct);
            q.pop();
            for(int e=0;e<4;e++)
            {
                int nr=r+row[e];
                int nc=c+col[e];
                if(nr>=0 && nr<n && nc>=0 && nc<m && vis[nr][nc]==0 && grid[nr][nc]==1)
                {
                    q.push({{nr,nc},ct+1});
                    vis[nr][nc]=2;
                }
            }
        }
        
        for(int e=0;e<n;e++)
        {
            for(int f=0;f<m;f++)
            {
                if(vis[e][f]!=2 && grid[e][f]==1) return -1;
            }
        }
        return t;
    }
};
