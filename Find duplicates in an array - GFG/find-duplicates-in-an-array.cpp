//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        
        unordered_map<int,int>temp ; 
       // int temp[n];
        vector<int>v;
         vector <int> v1={-1};
        for(int i=0;i<n;i++)
        {
            temp[arr[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(temp[arr[i]]>1)
                {
                    v.push_back(arr[i]);
                   temp.erase(arr[i]);
                }
        }
          sort(v.begin(), v.end());

        if(v.size()>0)
        return v;
        else
            return v1;
        
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends