// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// Back-end complete function Template for C++

class Solution{
public:
    void DFS(vector<int>adj[],bool visited[],int s,int i,vector<vector<int>>&res)
    {
        visited[i]=true;
        res[s][i]=1;
        
        for(auto u:adj[i])
        {
            if(visited[u]==false)
              DFS(adj,visited,s,u,res);
        }
    }
   
    vector<vector<int>> transitiveClosure(int N, vector<vector<int>> graph)
    {
        vector<int>adj[N];
        
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                if(i==j || graph[i][j]==0)
                continue;
                
                else
                adj[i].push_back(j);
            }
        }
        vector<vector<int>>res(N,vector<int>(N,0));
        for(int i=0;i<N;i++)
        {
            bool visited[N]={false};
            DFS(adj,visited,i,i,res);
        }
        return res;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> graph(N, vector<int>(N, -1));
        for(int i = 0;i < N;i++)
            for(int j=0;j<N;j++)
            cin>>graph[i][j];
        
        Solution ob;
        vector<vector<int>> ans = ob.transitiveClosure(N, graph);
        for(int i = 0;i < N;i++)
            {for(int j = 0;j < N;j++)
                cout<<ans[i][j]<<" ";
        cout<<"\n";}
    }
    return 0;
}  // } Driver Code Ends