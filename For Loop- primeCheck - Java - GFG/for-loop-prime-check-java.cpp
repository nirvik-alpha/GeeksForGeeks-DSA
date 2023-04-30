//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

void isPrime(int n) {

int k=0;
    for (int i = 2; i <= sqrt(n); i++) {
        
        if(n%i==0)
        {
            k=1;
            break;
        }
    }
    
    if(n==1 || k==1)
    cout<<"No";
    else
    cout<<"Yes";
    
cout << endl;
}

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        isPrime(n);
    }
    return 0;
}
// } Driver Code Ends