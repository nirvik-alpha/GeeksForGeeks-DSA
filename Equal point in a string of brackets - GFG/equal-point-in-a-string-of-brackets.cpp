//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int findIndex(string str) {
       
     
       int c=0;
       int open=0 , close =0;
       for(int i=0;i<str.length();i++)
        {
            if(str[i]==')')
            {
                close++;
            }
        }
        for(int j =0; j<str.length();j++)
        {
        
            if(str[j]==')')
            {
                close--;
            }
            else{
                open++;
            }
          
            if(open==close)
            {
                return j+1;
            }
            
        }
       
       
       
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.findIndex(s)<<endl;
	}
}
// } Driver Code Ends