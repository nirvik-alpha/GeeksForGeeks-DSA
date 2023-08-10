//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int a[], int n) {
	    
	    int l =0;
        int r = n-1;
        int ans = INT_MAX;
        int ind = -1;
        while(l<=r)
        {
            int mid = (l+r)/2;

            if(a[l]<=a[r])
            {
                
                if(a[l]<ans)
                {
                    ans = a[l];
                    ind = l;
                }
                break;
            }

            if(a[l]<=a[mid])
            {
                if(a[l]<ans)
                {
                    ans = a[l];
                    ind = l;
                }
                l = mid+1;
            }
            else{
                if(a[mid]<ans)
                {
                    ans = a[mid];
                    ind = mid;
                }
                r = mid-1;
            }

        }

        return ind;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends