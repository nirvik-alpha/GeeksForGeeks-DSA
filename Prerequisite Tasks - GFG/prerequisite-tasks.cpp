//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool isPossible(int V,int P, vector<pair<int, int> >& prerequisites) {
	    
	    vector<int>adj[V];
	    
	    for(auto u : prerequisites)
	    {
	        adj[u.first].push_back(u.second);
	        
	    }
	    
	    int indegree[V] ={0};
	    
	    for(int i=0;i<V;i++)
	    {
	        for(auto u : adj[i])
	        {
	            indegree[u]++;
	        }
	    }
	    
	    queue<int>q ;
	    for(int i=0;i<V;i++)
	    {
	        if(indegree[i]==0)
	        {
	            q.push(i);
	        }
	    }
	    
	    vector<int>topo ; 
	    
	    while(!q.empty())
	    {
	        int node = q.front();
	        q.pop();
	        topo.push_back(node);
	        
	        for(auto u: adj[node])
	        {
	            indegree[u]--;
	            if(indegree[u]==0)
	            q.push(u);
	        }
	        
	        
	    }
	    
	    if(topo.size()==V)
	    {
	        return true;
	    }
	    
	    return false;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N,P, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}
// } Driver Code Ends