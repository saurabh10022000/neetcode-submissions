class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        for(auto &it:edges)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<int>vis(n,0);
        int res=0;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                bfs(i,adj,vis);
                res++;
            }
        }
        return res;
    }
    void bfs(int node,vector<vector<int>>&adj,vector<int>&vis)
    {
        queue<int>q;
        q.push(node);
        //vis[node]=1;
        while(!q.empty())
        {
            int cur=q.front();
            q.pop();
            for(auto &x:adj[cur])
            {
                if(!vis[x])
                {
                    vis[x]=1;
                    q.push(x);
                }
            }
        }
    }
};
