//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  
    bool bs(int arr[] , int left,int right)
    {
        if(left==right)
        return true;
        
        int mid = left + (right-left)/2;
        
        bool leftsorted = bs(arr,left,mid);
        bool rightsorted = bs(arr,mid+1,right);
        bool check = (arr[mid]<=arr[mid+1]);
        
        return leftsorted && rightsorted && check ;
        
    }
  
    bool arraySortedOrNot(int arr[], int n) {
       
     return bs(arr,0,n-1);
       
       
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        bool ans = ob.arraySortedOrNot(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends