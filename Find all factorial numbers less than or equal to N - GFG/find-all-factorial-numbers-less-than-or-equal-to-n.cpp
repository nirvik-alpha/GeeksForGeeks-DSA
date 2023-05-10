//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    
    long long f(int n)
    {
        if(n==0)return 1;
        return n*f(n-1);
    }


    vector<long long> factorialNumbers(long long N)
    {
        int i=1;
        vector<long long>ans;
        
        while(f(i)<=N)
        {
            ans.push_back(f(i));
            i++;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends