class Solution 
{
public:
    void dfs(int node,vector<int> lst[],vector<int> &vis)
    {
        vis[node]=1;
        for(auto it:lst[node])
        {
            if(!vis[it]) dfs(it,lst,vis);
        }
    }
    int findCircleNum(vector<vector<int>>& adj) 
    {
        int cnt=0;
        int V=adj.size();
        vector<int> lst[V];
        for(int e=0;e<V;e++)
        {
            for(int f=0;f<V;f++)
            {
                if(adj[e][f] && e!=f)
                {
                    lst[e].push_back(f);
                    lst[f].push_back(e);
                }
            }
        }
        vector<int> vis(V,0);
        for(int e=0;e<V;e++)
        {
            if(!vis[e])
            {
                cnt++;
                dfs(e,lst,vis);
            }
        }
        return cnt;
    }
};
