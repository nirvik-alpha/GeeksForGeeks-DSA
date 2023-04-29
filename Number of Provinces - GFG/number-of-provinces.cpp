//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
  void dfs(vector<vector<int>>& adj , int V , vector<int>&visited , int src)
  {
      visited[src] = 1;
      for(int i=0;i<V;i++)
      {
          if(adj[src-1][i]==1)
          {
              if(visited[i+1]==0)
              {
                  dfs(adj,V,visited,i+1);
              }
          }
      }
      
  }
  
  
    int numProvinces(vector<vector<int>> adj, int V) {
       
        vector<int> visited(V+1,0);
        int ans = 0;
        for(int i =1;i<=V;i++)
        {
            if(visited[i] == 0)
            {
                ans++;
                dfs(adj,V,visited,i);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends