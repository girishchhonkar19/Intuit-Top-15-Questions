// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
    //Function to find a Mother Vertex in the Graph.
    
    void DFS(vector<int>adj[], int s,bool visited[])
    {
        visited[s]=true;
        
        for(auto u:adj[s])
        {
            if(visited[u]==false)
            {
               DFS(adj,u,visited); 
            }
            
        }
    }
    
	int findMotherVertex(int V, vector<int>adj[])
	{
	    bool visited[V]={false};
	    int store;
	    for(int i=0;i<V;i++)
	    {
	        if(visited[i]==false)
	        {
	            
	            DFS(adj,i,visited);
	            
	            store = i;
	        }
	    }
	    
	    for(int i=0;i<V;i++)
	    visited[i]=false;
	    
	    DFS(adj,store,visited);
	    
	    for(int i=0;i<V;i++)
	    {
	        if(visited[i]==false)
	        return -1;
	    }
	    return store;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
		}
		Solution obj;
		int ans = obj.findMotherVertex(V, adj);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends