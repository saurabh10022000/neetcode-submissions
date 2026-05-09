class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        if(n-1!=edges.size())return false;
        vector<vector<int>>adj(n);
        for(auto it:edges)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        queue<pair<int,int>>q;
        vector<bool>vis(n,false);
        q.push({0,-1});
        while(!q.empty())
        {
            int node=q.front().first;
            int par=q.front().second;
            q.pop();
            if(vis[node]==true)return false;
            vis[node]=true;
            for(auto it:adj[node])
            {
                if(vis[it]==false)
                {
                    q.push({it,node});
                }
                else if(it!=par)
                {
                    return false;
                }
            }
        }
       for (bool v : vis) {
            if (!v) return false; // Not all nodes are connected
        }
        return true;
    }
};
