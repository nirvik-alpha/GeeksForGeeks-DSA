//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution {
public:
    vector< int > factorial( int n){
       
    vector<int>res;
    
    res.push_back(1);
    
    for(int i=2;i<=n;i++)
    {
        int x =0;
        for(int j=0;j<res.size();j++)
        {
            int val = res[j]*i+x;
            res[j] = val%10;
            x = val/10;
        }
        
        while(x!=0)
        {
            res.push_back(x%10);
            x/=10;
        }
    }
        
        reverse(res.begin(),res.end());
        return res;

    
     
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends