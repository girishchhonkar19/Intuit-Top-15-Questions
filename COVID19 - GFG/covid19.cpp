#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	
	int t;cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int grid[n][m];
	    
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        cin>>grid[i][j];
	    }
	    
	    queue<pair<int,int>>q;
	    
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            if(grid[i][j]==0)
	            q.push({i,j});
	        }
	    }
	    
	    int dx[4]={1,-1,0,0};
	    int dy[4]={0,0,1,-1};
	    
	    int time=0;
	    while(!q.empty())
	    {
	        int k=q.size();
	        time++;
	        while(k--)
	        {
	            int x=q.front().first;
	            int y=q.front().second;
	            q.pop();
	            
	            for(int i=0;i<4;i++)
	            {
	                int nx=x+dx[i];
	                int ny=y+dy[i];
	                
	                if(nx<0 || ny<0 || nx>=n || ny >=m || grid[nx][ny]==0)
	                continue;
	                
	                grid[nx][ny]=0;
	                q.push({nx,ny});
	                
	            }
	  
	        }
	    }
	    cout<<time-1<<endl;
	}
	
	return 0;
}