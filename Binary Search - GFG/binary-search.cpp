//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
      
      
      int start =0, end=n-1;
        int mid,loc=-1;
        while (start<=end){
          
            mid=(start+end)/2;

            if (arr[mid]<k){
                start=mid+1;
            }
            else if (arr[mid]>k){
                end=mid-1;
            }
            else if (arr[mid]==k)
            {
               
               loc = mid;
               break;
            }
        }
       
      if (loc==-1){
           return -1;
        }
        else {
          return loc;
        }
       
      
      
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends