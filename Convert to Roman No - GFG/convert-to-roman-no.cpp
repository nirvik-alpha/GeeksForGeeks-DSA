//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    string convertToRoman(int n) {
        
        vector<pair<string,int>>arr=
          {
            {"M",1000},
            {"CM",900},
            {"D",500},
            {"CD",400},
            { "C",100},
            {"XC",90},
            {"L",50},
            {"XL",40},
            {"X",10},
            {"IX",9},
            {"V",5}, 
            {"IV",4},
            {"I",1}
        };
        
        string ans="";
        
        for(auto it:arr)
        {
            while(n>=it.second)
            {
                ans+=it.first;
                n-=it.second;
            }
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		Solution ob;
    	cout << ob.convertToRoman(N) << endl;
	}
	return 0;
}
// } Driver Code Ends