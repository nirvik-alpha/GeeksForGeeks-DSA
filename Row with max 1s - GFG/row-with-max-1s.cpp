//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    
	    
	    int maxi = 0;
	    int t =0;
	    vector<int>ans;
	    for(int i=0;i<n;i++)
	    {
	        int sum=0;
	        for(int j=0;j<m;j++)
	        {
	            if(arr[i][j]==1)
	            {
	                sum++;
	            }
	        }
	        
	        if(sum>maxi)
	        {
	            maxi = max(maxi,sum);
	            t = i;
	        }
	    }
	    if(maxi)
	    return t;
	    else
	    return -1;
	    
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends