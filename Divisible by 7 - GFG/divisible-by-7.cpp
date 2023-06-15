//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int isdivisible7(string num){
        
        long long ans=0;
        int digit=0;
        for(int i=0;i<num.size();i++)
        {
            digit = num[i]-'0';
            ans = ans*10 + digit;
            ans = ans%7;
        }
        
        if(ans%7==0)
        return 1;
        else
        return 0;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isdivisible7(s) << endl;
    }
    return 0;
}
// } Driver Code Ends