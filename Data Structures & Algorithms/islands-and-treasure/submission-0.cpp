class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        for(int i=0;i<grid.size();++i)
        {
            for(int j=0;j<grid[0].size();++j)
            {
                if(grid[i][j]==0)
                {
                    q.push({i,j});
                }
            }
        }
        vector<int>rr={-1,0,1,0};
        vector<int>cc={0,-1,0,1};
        while(!q.empty())
        {
            int a=q.front().first;
            int b=q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int na=a+rr[i];
                int nb=b+cc[i];
                if(na>=0 && na<grid.size() && nb>=0 && grid[0].size() &&grid[na][nb]==INT_MAX)
                {
                    grid[na][nb]=grid[a][b]+1;
                    q.push({na,nb});
                }
            }
        }
    }
};
