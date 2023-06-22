//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Solution
{
   public:
    string ReFormatString(string s, int k){
    	
    	string sx="";
    	
        
    	int c=0;
    	string sv="";
    	for(int i=s.length()-1;i>=0;i--)
    	{
    	    reCheck:
    	    if(isalpha(s[i]))
    	    s[i]=toupper(s[i]);
    	    
    	    if(c<k)
    	    {
    	        if(s[i]!='-')
    	        {
    	        sv+=s[i];
    	        c++;
    	        }
    	    }
    	    else if(c==k){
    	        sv+='-';
    	        c=0;
    	         goto reCheck;
    	    }
    	}
    	
    	if(sv.back()=='-')
    	sv.pop_back();
    	
    	reverse(sv.begin(),sv.end());
    	return sv;
    	
    	
    	
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string S;
	    cin>>S;
	    int K;
	    cin >> K;
	    Solution ob;  
	    string ans=ob.ReFormatString(S, K);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends