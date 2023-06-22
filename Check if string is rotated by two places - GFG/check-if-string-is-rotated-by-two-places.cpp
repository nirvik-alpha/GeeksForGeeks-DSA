//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        string x="",y="";
        for(int i=2;i<str1.size();i++)
        x+=str1[i];
        
        x+=str1[0];
        x+=str1[1];
        
        for(int i=2;i<str2.size();i++)
        y+=str2[i];
        
        y+=str2[0];
        y+=str2[1];
      
        if(x==str2 || y==str1)
        return 1;
        else
        return 0;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends