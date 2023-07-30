//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
       
       vector<int>adj[N];
       
       //  graph created with given edges
       for(auto u: edges)
       {
           adj[u[0]].push_back(u[1]);
           adj[u[1]].push_back(u[0]);
       }
       
       int dist[N];
       // initialze all the distance value with infinite 
       for(int i=0;i<N;i++)
       {
           dist[i] = 1e9;
       }
      
      // source to source is always zero  
       dist[src] = 0;
       
       queue<int>q;
       q.push(src);
       
       while(!q.empty())
       {
           int node = q.front();
           q.pop();
           
           for(auto u: adj[node])
            {
                if(dist[node]+1<dist[u])
                {
                    dist[u] = 1+ dist[node];
                    q.push(u);
                }
                
            }
           
       }
       
       vector<int>ans(N,-1);
       for(int i=0;i<N;i++)
       {
           if(dist[i]!=1e9)
           {
               ans[i] = dist[i];
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
        int n, m; cin >> n >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for(int j=0; j<2; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src; cin >> src;

        Solution obj;

        vector<int> res = obj.shortestPath(edges, n, m, src);

        for (auto x : res){
            cout<<x<<" ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends