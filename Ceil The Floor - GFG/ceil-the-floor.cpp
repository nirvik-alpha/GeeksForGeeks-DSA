//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    
    
    sort(arr,arr+n);
    
    int start =0;
    int end = n-1;
    int flr =-1;
    int cel = -1;
    while(start<=end)
    {
        int mid = start+(end-start)/2;
        if(arr[mid]<x)
        {
            flr = arr[mid];
            start = mid+1;
        }
        else if(arr[mid]>x)
        {
            cel = arr[mid]; 
            end = mid-1;
            
        }
        else if(arr[mid]==x)
        {
            flr = arr[mid];
            cel = arr[mid];
            break;
        }
        
    }
    return {flr,cel};
    
}