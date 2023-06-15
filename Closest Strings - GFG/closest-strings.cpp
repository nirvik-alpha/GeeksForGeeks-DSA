//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int shortestDistance(vector<string> &s, string word1, string word2)
	{
		map<string , int> mp;
		int ans = 99999;
		int x,y;
		for(int i=0;i<s.size();i++)
		{
		    if(s[i]==word1)
		    {
		        x = i;
		    }
		    if(s[i]==word2)
		    {
		        y = i;
		    }
		    
		    if(x!=-1 && y!=-1){
		        ans = min(ans, abs(x-y));
		    }
		    
		}
		
		return ans;
		
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
   		int n;
   		cin >> n;

   		vector<string> s(n);
   		for(int i = 0; i < n; i++)
   			cin >> s[i];

   		string word1, word2;

   		cin >> word1 >> word2;
   		
   		Solution ob;

   		cout << ob.shortestDistance(s, word1, word2) << "\n";
   	}

    return 0;
}
// } Driver Code Ends