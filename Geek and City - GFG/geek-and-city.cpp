#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void DFS(vector<int>adj[],bool visited[],int s)
{
    visited[s]=true;
    
    for(auto u:adj[s])
    {
        if(visited[u]==false)
         DFS(adj,visited,u);
    }
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    
	    vector<int>adj[n+1];
	    bool visited[n+1];
	    
	    for(int i=0;i<=n;i++)
	    visited[i]=false;
	    
	    for(int i=1;i<=m;i++)
	    {
	        int x,y;
	        cin>>x>>y;
	        
	        adj[x].push_back(y);
	        adj[y].push_back(x);
	    }
	    int count=0;
	    for(int i=1;i<=n;i++)
	    {
	        if(visited[i]==false)
	        {
	            count++;
	            DFS(adj,visited,i);
	        }
	    }
	    cout<<count-1<<endl;
	}
	return 0;
}