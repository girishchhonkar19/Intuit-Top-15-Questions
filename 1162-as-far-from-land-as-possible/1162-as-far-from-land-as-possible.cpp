class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int n=grid.size();
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                    q.push({i,j});
            }
         }
        
        int ans=0;
        int dx[4]={1,-1,0,0};
        int dy[4]={0,0,1,-1};
        while(!q.empty())
        {
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nx=x+dx[i];
                int ny=y+dy[i];
                
                if(nx>=0 && nx<n && ny>=0 && ny<n && grid[nx][ny]==0)
                {
                    q.push({nx,ny});
                    
                    grid[nx][ny]=grid[x][y]+1;
                    
                    ans=max(ans,grid[nx][ny]);
                }
            }
            
        }
        return ans-1;
    }
};