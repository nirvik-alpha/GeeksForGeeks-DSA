//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    
    
private: 
bool dfs( stack<int>& st , int node , vector<int>adj[], vector<int> &path , vector<int> &vis)
{
    vis[node]= 1;
    path[node] = 1;

    for(auto u : adj[node])
    {
        if(!vis[u])
        {
            if(dfs(st,u,adj,path,vis)==true) return true;
        }
        else if(path[u])
        {
            return true;
        }
    }

    path[node]=0;
    st.push(node);
    return false;


}

    
    
  public:
    vector<int> findOrder(int V, int m, vector<vector<int>> prerequisites) 
    {
           stack<int>st;
       vector <int> vis(V, 0);
        vector<int>adj[V];
       vector<int>path(V,0) ;

         for(auto i:prerequisites)
            adj[i[1]].push_back(i[0]);

        vector<int> ans;
        for(int i=0;i<V;i++)   
        {
            if(!vis[i])
            {
                if(dfs(st,i,adj,path,vis)==true)
                 return ans;
            }
        }

        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }


        return ans;
    }
};

//{ Driver Code Starts.

int check(int V, vector <int> &res, vector<int> adj[]) {
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int u, v;

        vector<vector<int>> prerequisites;

        for (int i = 0; i < m; i++) {
            cin >> u >> v;
            prerequisites.push_back({u,v});
        }
        
        vector<int> adj[n];
        for (auto pre : prerequisites)
            adj[pre[1]].push_back(pre[0]);
        
        Solution obj;
        vector <int> res = obj.findOrder(n, m, prerequisites);
        if(!res.size())
            cout<<"No Ordering Possible"<<endl;
        else
            cout << check(n, res, adj) << endl;
    }
    
    return 0;
}
// } Driver Code Ends