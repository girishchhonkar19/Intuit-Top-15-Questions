// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    void DFS(vector<int>adj[],bool visited[],int s,int d,int &count)
    {
        visited[s]=true;
        if(s==d)
        {
            count++;
        }
        for(auto i:adj[s])
        {
            if(visited[i]==false)
            DFS(adj,visited,i,d,count);
            
            visited[i]=false;
        }
        
        
    }
   
	int possible_paths(vector<vector<int>>edges, int n, int s, int d){
	    
	    vector<int>adj[n];
	    bool visited[n]={false};
	    
	    for(auto i:edges)
	    {
	        adj[i[0]].push_back(i[1]);
	    }
	    int count=0;
	    DFS(adj,visited,s,d,count);
	    
	    return count;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m, s, d;
		cin >> n >> m >> s >> d;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int u, v;
			cin >> u >> v;
			edges.push_back({u,v});
		}
		Solution obj;
		int ans = obj.possible_paths(edges, n, s, d);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends