//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    
    

 private:
 bool dfs(int node , vector<int> adj[] , int path[] , int vis[])
 {
      vis[node] = 1;
      path[node] = 1;
     
     for(auto u : adj[node])
     {
         if(!vis[u])
         {
             if(dfs(u, adj,path,vis)==true) return true;
         }
         else if(path[u])
         {
             return true;
         }
     }
  
  
  
  path[node] =0;
  return false;
     
 }
    
    
    
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
       
       int vis[V] = {0} ;
       int path[V] = {0};
       
       for(int i=0;i<V;i++)
       {
           if(!vis[i])
           {
               if(dfs(i,adj,path,vis)==true)
                return true;
           }
       }
       
       
       return false;
       
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends