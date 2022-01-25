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
        if(q.size()==0 || q.size()==n*n) return -1;
        int ans=0;
        int dx[4]={1,-1,0,0};
        int dy[4]={0,0,1,-1};
        int step=0;
        while(!q.empty())
        {
            int qsize=q.size();
            step++;
            for(int j=0;j<qsize;j++)
            {
                int x=q.front().first;
            int y=q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nx=x+dx[i];
                int ny=y+dy[i];
                
                if(nx<0 || nx>=n || ny<0 || ny>=n || grid[nx][ny]==1)
                    continue;
                
                    q.push({nx,ny});
                    
                    grid[nx][ny]=1;
                    
                    ans=max(ans,step);
                
            }
            
            }
            
        }
        return ans;
    }
};