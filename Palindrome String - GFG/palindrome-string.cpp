//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	bool f(int i , string &s)
	{
	    if(i>=s.size()/2)return true;
	    
	    if(s[i]!=s[s.size()-i-1])return false;
	    
	    return f(i+1,s);
	}
	
	int isPalindrome(string S)
	{
	    
	    return f(0,S);
	    
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends